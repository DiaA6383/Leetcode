#include <iostream>
#include <string>
#include <vector>

class Solution {
public:
  int minimumSum(int num) {
    int max = 0;
    int count = 0;
    std::vector<int> entries;

    while (num != 0) {
      entries.push_back(num % 10);
      num = num / 10;
      count++;
    }

    for (int i = 0; i < entries.size(); i++) {
      for (int j = 0; j < i; j++) {
      }
    }

    return max;
  }
};