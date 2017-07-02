#include "anagram.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <boost/algorithm/string.hpp>
#include <unordered_map>

anagram::anagram::anagram(std::string word) {
    this->word = word;
    this->word_map = populate_map(this->word);
}

std::vector<std::string> anagram::anagram::matches(std::vector<std::string> match_list) {
    std::vector<std::string> all_matches;
    for (const auto &match_word : match_list) {
        if (this->is_anagram(match_word) && !boost::iequals(match_word, this->word)) {
            all_matches.push_back(match_word);
        }
    }
    return all_matches;
}

bool anagram::anagram::is_anagram(std::string possible_match) {
    return word_map == populate_map(possible_match);
}

std::unordered_map<char, int> anagram::anagram::populate_map(std::string word_to_check) {
    boost::to_lower(word_to_check);
    std::sort(word_to_check.begin(), word_to_check.end(), std::greater<char>());
    std::unordered_map<char, int> my_map;
    for (const auto &c : word_to_check) {
        if (my_map.find(c) != my_map.end()) {
            my_map[c] = 0;
        } else {
            my_map[c] += 1;
        }
    }
    return my_map;
}
