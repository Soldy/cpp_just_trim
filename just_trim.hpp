#ifndef __CPP_JUST_TRIM_HPP_
#define __CPP_JUST_TRIM_HPP_

#include <algorithm> 
#include <cctype>
#include <locale>
#include <string>

namespace just_trim{

bool spaceCheck(char c){
    return !std::isspace(c);
};

void leftTrim(std::string &input_) {
    input_.erase(
      input_.begin(),
      std::find_if(
        input_.begin(),
        input_.end(), 
        just_trim::spaceCheck
      )
    );
};

void rightTrim(std::string &input_) {
    input_.erase(
      std::find_if(
        input_.rbegin(), 
        input_.rend(),
        just_trim::spaceCheck
      ).base(), 
      input_.end()
    );
};

void trim(std::string &input_) {
    just_trim::rightTrim(input_);
    just_trim::leftTrim(input_);
};
}

#endif
