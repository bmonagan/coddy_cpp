#include <iostream>

int main() {
    double n1, n2;
    char op;
    std::cin >> n1 >> n2 >> op;
    
    double result = 0;
    
    if (op == '+') {
        result = n1 + n2;
    } else if (op == '-') {
        result = n1 - n2;
    } else if (op == '/') {
        result = n1 / n2;
    } else if (op == '*') {
        result = n1 * n2;
    }
    
    std::cout << result << std::endl;
    return 0;
}