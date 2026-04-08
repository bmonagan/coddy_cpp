#include <iostream>

int main() {
    int number;
    std::cin >> number;
    std::string result = "";
    
    // Write your code below
    result = (number == 0) ? "zero" : (number > 0) ? "positive" : "negative";
    
    std::cout << "The number is " << result << std::endl;
    return 0;
}