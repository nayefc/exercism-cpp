#if !defined(ANAGRAM_H)
#define ANAGRAM_H

#include <string>
#include <vector>
#include <unordered_map>

namespace anagram {

class anagram {
  public:
    anagram(std::string word);
    std::vector<std::string> matches(std::vector<std::string> match_list);
  private:
    std::string word;
    std::unordered_map<char, int> word_map;
    bool is_anagram(std::string possible_match);
    std::unordered_map<char, int> populate_map(std::string populate_word);
};

}

#endif
