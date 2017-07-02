#include "anagram.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <boost/algorithm/string.hpp>
#include <unordered_map>

anagram::anagram::anagram(std::string word) {
    this->word = this->sorted = word;
    boost::to_lower(this->sorted);
    std::sort(this->sorted.begin(), this->sorted.end());
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
    boost::to_lower(possible_match);
    std::sort(possible_match.begin(), possible_match.end());
    return sorted == possible_match;
}
