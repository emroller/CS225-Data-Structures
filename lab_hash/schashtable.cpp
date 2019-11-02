/**
 * @file schashtable.cpp
 * Implementation of the SCHashTable class.
 */

#include "schashtable.h"
#include <iostream>
using std::cout;
using std::endl;
using hashes::hash;
using std::list;
using std::pair;


template <class K, class V>
SCHashTable<K, V>::SCHashTable(size_t tsize)
{
    if (tsize <= 0)
        tsize = 17;
    size = findPrime(tsize);
    table = new std::list<std::pair<K, V>>[size];
    elems = 0;
}

template <class K, class V>
SCHashTable<K, V>::~SCHashTable()
{
    delete[] table;
}

template <class K, class V>
SCHashTable<K, V> const& SCHashTable<K, V>::
operator=(SCHashTable<K, V> const& rhs)
{
    if (this != &rhs) {
        delete[] table;
        table = new std::list<std::pair<K, V>>[rhs.size];
        for (size_t i = 0; i < rhs.size; i++)
            table[i] = rhs.table[i];
        size = rhs.size;
        elems = rhs.elems;
    }
    return *this;
}

template <class K, class V>
SCHashTable<K, V>::SCHashTable(SCHashTable<K, V> const& other)
{
    table = new std::list<std::pair<K, V>>[other.size];
    for (size_t i = 0; i < other.size; i++)
        table[i] = other.table[i];
    size = other.size;
    elems = other.elems;
}

template <class K, class V>
void SCHashTable<K, V>::insert(K const& key, V const& value)
{
	unsigned int newHash = hash(key, size);
	std::pair<K, V> p(key, value);
	table[newHash].push_front(p);
	
	// increment the size of the table
	elems++;
	if (shouldResize())
		resizeTable();	


}

template <class K, class V>
void SCHashTable<K, V>::remove(K const& key)
{
    typename std::list<std::pair<K, V>>::iterator it;
	unsigned int current = hash(key, size);

    if (table[current].empty())
		return;

	for (it = table[current].begin(); it != table[current].end(); it++) {
        if (key == it->first) {
            table[current].erase(it);
            elems--;
            break;
        }
    }
}

template <class K, class V>
V SCHashTable<K, V>::find(K const& key) const
{

	unsigned int current= hash(key, size);
	
    typename list<pair<K, V>>::iterator it;
	for (it = table[current].begin(); it != table[current].end(); it++) {
        if (it->first == key)
			return it->second;
    }
    return V();
}

template <class K, class V>
V& SCHashTable<K, V>::operator[](K const& key)
{
    size_t idx = hashes::hash(key, size);
    typename std::list<std::pair<K, V>>::iterator it;
    for (it = table[idx].begin(); it != table[idx].end(); it++) {
        if (it->first == key)
            return it->second;
    }

    // was not found, insert a default-constructed version and return it
    ++elems;
    if (shouldResize())
        resizeTable();

    idx = hashes::hash(key, size);
    std::pair<K, V> p(key, V());
    table[idx].push_front(p);
    return table[idx].front().second;
}

template <class K, class V>
bool SCHashTable<K, V>::keyExists(K const& key) const
{
    size_t idx = hashes::hash(key, size);
    typename std::list<std::pair<K, V>>::iterator it;
    for (it = table[idx].begin(); it != table[idx].end(); it++) {
        if (it->first == key)
            return true;
    }
    return false;
}

template <class K, class V>
void SCHashTable<K, V>::clear()
{
    delete[] table;
    table = new std::list<std::pair<K, V>>[17];
    size = 17;
    elems = 0;
}

template <class K, class V>
void SCHashTable<K, V>::resizeTable()
{
    typename std::list<std::pair<K, V>>::iterator it;
    /**
     * @todo Implement this function.
     *
     * Please read the note in the spec about list iterators!
     * The size of the table should be the closest prime to size * 2.
     *
     * @hint Use findPrime()!
     */

	// load factor = number of keys / capacit
	unsigned int tableSize = findPrime(size*2);	
	std::list<std::pair<K, V>>* newlist = new std::list<std::pair<K,V>>[tableSize];

	for (unsigned int i = 0 ; i < size; i++){
		for (it = table[i].begin(); it != table[i].end(); it++) {
			unsigned current = hash(it->first, tableSize);
			newlist[current].push_front(std::pair<K, V>(it->first, it->second));			
		}
	}
	size = tableSize;
	delete[] table;
	table = newlist;
			
}
