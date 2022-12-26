#include <iostream>
#include <string>
#include <vector>
#include "leetcode.hpp"


std::string solution::restoreString(std::string s, std::vector<int>&indices){
      std::string unshuffled(s.size(), '\0');
      for(int i = 0 ; i  < indices.size(); i++){
        unshuffled[indices[i]] = s[i];
      }
    return unshuffled;
}

