#include <iostream>

double bigger(double arg1, double arg2) {
    if (arg1 > arg2) {
        return arg1;
    } else {
        return arg2;
    }
}

int main() {
    int iterations;
    double num1, num2;
    std::cin >> iterations >> num1 >> num2;

    for (int i = 0; i < iterations; i++) {
        if (num1 < 2 || num2 < 2) {
            break;
        }
        double big = bigger(num1, num2);
        if (big == num1) {
            num1 /= 2;
            std::cout << num1 << std::endl;
        } else {
            num2 /= 2;
            std::cout << num2 << std::endl;
        }
    }
    return 0;
}