
/**
 * @file heap.cpp
 * Implementation of a heap class.
 */
#include <iostream>

template <class T, class Compare>
size_t heap<T, Compare>::root() const
{
    return 1;
}

template <class T, class Compare>
size_t heap<T, Compare>::leftChild(size_t currentIdx) const
{
	return 2*currentIdx;
}

template <class T, class Compare>
size_t heap<T, Compare>::rightChild(size_t currentIdx) const
{
    return 2*currentIdx + 1;
}

template <class T, class Compare>
size_t heap<T, Compare>::parent(size_t currentIdx) const
{
    return currentIdx / 2;
}

template <class T, class Compare>
bool heap<T, Compare>::hasAChild(size_t currentIdx) const
{
	return currentIdx*2 < _elems.size();
}

// returns the index of the child with the highest priority
// higherPriority(first, second) returns true if first < second, false otherwise
template <class T, class Compare>
size_t heap<T, Compare>::maxPriorityChild(size_t currentIdx) const
{
	if (hasAChild(currentIdx)) {
		if(rightChild(currentIdx) >= _elems.size()){
    	    return leftChild(currentIdx);
     	}
		return higherPriority(_elems[leftChild(currentIdx)], _elems[rightChild(currentIdx)]) ? leftChild(currentIdx) : rightChild(currentIdx);
	}

	return -1;		// if at a leaf
}

template <class T, class Compare>
void heap<T, Compare>::heapifyDown(size_t currentIdx)
{

	// If we're not at a leaf node
	if (hasAChild(currentIdx)) {
		size_t childIndex = maxPriorityChild(currentIdx);

		// Only swap if the current element is greater than either of its children
		if (higherPriority( _elems[childIndex], _elems[currentIdx])) {	
			std::swap(_elems[childIndex],_elems[currentIdx]);
			heapifyDown(childIndex);
		}
	}
}

template <class T, class Compare>
void heap<T, Compare>::heapifyUp(size_t currentIdx)
{
    if (currentIdx == root())
        return;

    size_t parentIdx = parent(currentIdx);
    if (higherPriority(_elems[currentIdx], _elems[parentIdx])) {
        std::swap(_elems[currentIdx], _elems[parentIdx]);
        heapifyUp(parentIdx);
    }
}

template <class T, class Compare>
heap<T, Compare>::heap()
{
	// so that the root is at 1
	_elems.push_back(T());	
}

template <class T, class Compare>
heap<T, Compare>::heap(const std::vector<T>& elems) 
{
	_elems = elems;
	_elems.insert(_elems.begin(), T());
	for (size_t i = _elems.size() - 1; i > 0; i--) {
		heapifyDown(i);
	}
}

template <class T, class Compare>
T heap<T, Compare>::pop()
{
	if (_elems.size() == root()) return T();
	/*
 	* Swap the last element(index i) for the root
 	* result=_elems[i]
 	* Remove the last element: (_elems.pop_back())
 	* HeapifyDown(root);
 	* Return result;
 	*/
	T elem = _elems[root()];
	std::swap(_elems[root()], _elems[_elems.size()-1]);
	_elems.pop_back();	
	heapifyDown(root());
    return elem;
}

template <class T, class Compare>
T heap<T, Compare>::peek() const
{
    return _elems[root()];
}

template <class T, class Compare>
void heap<T, Compare>::push(const T& elem)
{
	_elems.push_back(elem);	
	heapifyUp(_elems.size() - 1);
}

template <class T, class Compare>
void heap<T, Compare>::updateElem(const size_t & idx, const T& elem)
{
	std::cout<<"here"<<std::endl;
	_elems[idx] = elem;
	
	if (higherPriority(elem, _elems[parent(idx)])) {
		heapifyUp(idx);
	} else {
		heapifyDown(idx);
	}

}


template <class T, class Compare>
bool heap<T, Compare>::empty() const
{
	return _elems.size() == 1;
}

template <class T, class Compare>
void heap<T, Compare>::getElems(std::vector<T> & heaped) const
{
    for (size_t i = root(); i < _elems.size(); i++) {
        heaped.push_back(_elems[i]);
    }
}
