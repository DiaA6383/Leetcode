#include <iostream>
#include <string>
#include <vector>


int main() {

}


std::string Solution::restoreString(std::string s, std::vector<int>&indices){
      std::string unshuffled(s.size(), ' ');
      for(int i = 0 ; i  < indices.size(); i++){
        unshuffled[indices[i] = s[i]];
      }
    return unshuffled;
}

