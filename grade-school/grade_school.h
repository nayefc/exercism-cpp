#if !defined(GRADE_SCHOOL_H)
#define GRADE_SCHOOL_H

#include <map>
#include <vector>
#include <string>

namespace grade_school{

class school {
  public:
    std::map<int, std::vector<std::string>> roster();
    void add(std::string name, int grade);
    const std::vector<std::string> grade(int grade);
  private:
    std::map<int, std::vector<std::string>> grade_map;
};

}

#endif
