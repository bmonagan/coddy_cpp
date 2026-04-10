#include <iostream>
#include <string>

int main() {
    std::string inpt;
    std::cin >> inpt;
    // Write your code below
    std::string output = inpt == "1" ? "T" : "F";
    std::cout << output;

    return 0;
}