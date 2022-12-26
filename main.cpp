#include <iostream>
#include <string>
#include <vector>
#include "leetcode.hpp"


int main() {

    solution test;
    std::string test_string = "Hello, there!";
    std::vector<int> test_indices = {12, 11, 10, 9, 8 ,7 , 6, 5 ,4 ,3 ,2 ,1 ,0};

    std::cout << test.restoreString(test_string, test_indices);


}