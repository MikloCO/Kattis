//https://open.kattis.com/problems/veci
#include <algorithm>
#include <iostream>
#include <string>

int main() {
    std::string input;
    std::cin >> input; 
    std::next_permutation(input.begin(), input.end()) ? printf("%s", input.c_str()) : printf("0");
}
