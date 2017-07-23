#include "phone_number.h"
#include <string>
#include <iostream>

phone_number::phone_number(std::string s) {
    s.erase(
        std::remove_if(s.begin(), s.end(), [](char i) {
                return i == '(' || i == ')' || i == '-' || i == ' ' || i == '.';}),
        s.end()
    );

    if (s.size() != 10) {
        if (s.size() == 11 && s.front() == '1') {
            s.erase(0, 1);
        } else {
            cleaned_s = "0000000000";
            return;
        }
    }

    cleaned_s = s;
}

const std::string phone_number::number() const {
    return cleaned_s;
}

const std::string phone_number::area_code() const {
    return cleaned_s.substr(0, 3);
}

phone_number::operator std::string() const {
    return "(" + cleaned_s.substr(0, 3) + ")" + " " + cleaned_s.substr(3, 3) + "-"
        + cleaned_s.substr(6);
}
