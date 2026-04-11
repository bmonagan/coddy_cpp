#include <iostream>

int main() {
    // Write your code below
    double x;
    std::cin >> x;
    while (x >= 3.5) {
        x /= 2;
    }
    std::cout << x;
    
    return 0;
}