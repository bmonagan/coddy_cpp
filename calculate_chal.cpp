#include <iostream>
using namespace std;

void calculate(int a, int b, char op) {
    switch(op) {
        case '+':
            std::cout << a << " + " << b << " = " << a + b;
            break;
        case '-':
            std::cout << a << " - " << b << " = " << a - b;
            break;
        case '*':
            std::cout << a << " * " << b << " = " << a * b;
            break;
        case '/':
            std::cout << a << " / " << b << " = " << a / b;
            break;
    }
}

int main() {
    int a, b;
    char op;
    
    std::cin >> a >> b >> op;
    
    // Call the function with a, b, and op as arguments
    calculate(a, b, op);
    
    return 0;
}