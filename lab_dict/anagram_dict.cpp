/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>
#include <iostream>

using std::string;
using std::vector;
using std::ifstream;
using std::cout;
using std::endl;

/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string& filename)
{
	ifstream wordsFile(filename);
    string word;
    if (wordsFile.is_open()) {
      while (getline(wordsFile, word)) {
        string s = word;
        sort(s.begin(), s.end());
        dict[s].push_back(word);
      }
    }

}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 *
 * std::map<std::string, std::vector<std::string>> dict;
 */
AnagramDict::AnagramDict(const vector<string>& words)
{
	for (string s : words) {
		string key = s;
		std::sort(key.begin(), key.end());
		dict[key].push_back(s);
		
	}	
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string& word) const
{
	string key = word;
	std::sort(key.begin(), key.end());
	auto lookup = dict.find(key);
	if (lookup != dict.end()) {
	return lookup->second;
	} else {
		return vector<string>();
	}
}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
    /* Your code goes here! */
	vector<vector<string>> anagrams;
    for(std::pair<std::string, std::vector<std::string>> key_val : dict){
      if(key_val.second.size() > 1){
        anagrams.push_back(key_val.second);
      }
    }
    return anagrams;
}

