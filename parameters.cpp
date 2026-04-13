#include <iostream>

// Function declaration
void calcProduct(int a, int b) {
    int pro = a * b;
    std::cout << pro;
}


int main() {
    int a, b;
    std::cin >> a >> b;
    // Call the function with a and b as arguments
    calcProduct(a,b);
    return 0;
}