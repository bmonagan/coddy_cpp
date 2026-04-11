#include <iostream>

int main() {
    // Initialize variables
    int sum = 0;
    int number = 1;

    // Your code here
    do {
        sum += number;
        number += 2;
        std::cout << "Sum is: " << sum << "\n";
        std::cout << "Num is: " << number << "\n";
    }
    while (number <= 50);
    

    // Print the final sum
    std::cout << "Final Sum: " << sum << std::endl;
    return 0;
}