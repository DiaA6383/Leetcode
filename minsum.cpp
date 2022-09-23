#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  int minimumSum(int num) {
    std::string s = std::to_string(num); // converts to string
    sort(begin(s), end(s));              // sorts

    return stoi(s.substr(0, 1) + s.substr(2, 1)) + // string to int
           stoi(s.substr(1, 1) + s.substr(3, 1));
  }
};