#include "grade_school.h"
#include <map>
#include <vector>
#include <string>

std::map<int, std::vector<std::string>> grade_school::school::roster() {
    return grade_map;
}

void grade_school::school::add(std::string name, int grade) {
    grade_map[grade].push_back(name);
    std::sort(grade_map[grade].begin(), grade_map[grade].end());
}

const std::vector<std::string> grade_school::school::grade(int grade) {
    return grade_map[grade];
}
