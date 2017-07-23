#if !defined(PHONE_NUMBER_H)
#define PHONE_NUMBER_H

#include <string>

class phone_number {
  public:
    phone_number(std::string s);
    const std::string number() const;
    const std::string area_code() const;
    operator std::string() const;
  private:
    std::string cleaned_s;
};

#endif
