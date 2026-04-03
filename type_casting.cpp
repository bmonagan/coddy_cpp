#include <iostream>

int main() {
    // Declare and initialize variables
    double price = 99.99;
    int intPrice = static_cast<int>(price); // Explicit casting from double to int
    
    
    // Output the values
    std::cout << "Price: " << price << std::endl;
    std::cout << "Int Price: " << intPrice << std::endl;
    
    return 0;
}