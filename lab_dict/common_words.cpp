/**
 * @file common_words.cpp
 * Implementation of the CommonWords class.
 *
 * @author Zach Widder
 * @date Fall 2014
 */

#include "common_words.h"

#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using std::string;
using std::vector;
using std::ifstream;
using std::cout;
using std::endl;
using std::feof;

string remove_punct(const string& str)
{
    string ret;
    std::remove_copy_if(str.begin(), str.end(), std::back_inserter(ret),
                        std::ptr_fun<int, int>(&std::ispunct));
    return ret;
}

CommonWords::CommonWords(const vector<string>& filenames)
{
    // initialize all member variables
    init_file_word_maps(filenames);
    init_common();
}

void CommonWords::init_file_word_maps(const vector<string>& filenames)
{
    // make the length of file_word_maps the same as the length of filenames
    // vector<map<string, unsigned int>> file_word_maps;
    file_word_maps.resize(filenames.size());

    // go through all files
    for (size_t i = 0; i < filenames.size(); i++) {
        // get the corresponding vector of words that represents the current
        // file
        vector<string> words = file_to_vector(filenames[i]);
		
		// for each word in the file, add a pair to the map that corresponds to the current file
		for (string s : words) {
			// check if that word is already in the map
			map<string, unsigned int> &curr_map = file_word_maps[i];
			map<string, unsigned int>::iterator lookup = curr_map.find(s);
			if (lookup == curr_map.end()) {
				curr_map[s] = 1;
			} else {
				curr_map[s]++;
			}
		}
			
    }
}

/* #common maps a word to the number of documents that word appears in
std::map<std::string, unsigned int> common;
*/
void CommonWords::init_common()
{
	// each map corresponds to a document
	for (map<string, unsigned int> &doc : file_word_maps) {
		for (std::pair<string, unsigned int> word : doc) {
			// see if the word is already in common
			map<string, unsigned int>::iterator lookup = common.find(word.first);
			if (lookup == common.end()) {
				common[word.first] = 1;
			} else {
				common[word.first]++;
			}	
		}

	}
}

/**
 * @param n The number of times to word has to appear.
 * @return A vector of strings. The vector contains all words that appear
 * in each file >= n times.
 */
vector<string> CommonWords::get_common_words(unsigned int n) const
{
    vector<string> out;
	for (std::pair<string, unsigned int> word : common) {
		// only if the word is in each file
		if (word.second == file_word_maps.size()) {
		
			// for each file's word-count map
			unsigned int count = 0;
			for (map<string, unsigned int> map : file_word_maps) {
				if (map.find(word.first)->second >= n)
					count++;
			}
			if (count == file_word_maps.size()) out.push_back(word.first);	
		}
	}
    return out;
}

/**
 * Takes a filename and transforms it to a vector of all words in that file.
 * @param filename The name of the file that will fill the vector
 */
vector<string> CommonWords::file_to_vector(const string& filename) const
{
    ifstream words(filename);
    vector<string> out;

    if (words.is_open()) {
        std::istream_iterator<string> word_iter(words);
        while (!words.eof()) {
            out.push_back(remove_punct(*word_iter));
            ++word_iter;
        }
    }
    return out;
}
