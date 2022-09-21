#include <iostream>
#include <string>
#include <vector>

// A sentence is a list of words that are separated by a single space with no
// leading or trailing spaces. You are given an array of strings sentences,
// where each sentences[i] represents a single sentence. Return the maximum
// number of words that appear in a single sentence.

int main() {
  class Solution {
  public:
    int mostWordsFound(std::vector<std::string> &sentences) {
      int count = 1;   // will automatically be 1 (one word)
      int max_int = 0; // just initialize
      char space = ' ';

      for (int i = 0; i < sentences.size(); i++) {
        for (int j = 0; j < sentences[i].length(); j++) {
          if (sentences[i][j] == space) {
            // iterate through each char in string vector
            count++; // iterate count if char is space
          }
        }
        if (count > max_int) { // compare for top spot
          max_int = count;
        }
        count = 1; // reset
      }
      return max_int;
    }
  };

  std::vector<std::string> sentenced;
  sentenced.push_back("alice and bob love leetcode");
  sentenced.push_back("i think so too");
  sentenced.push_back("this is great thanks very much");

  Solution test;
  std::cout << test.mostWordsFound(sentenced);
}
