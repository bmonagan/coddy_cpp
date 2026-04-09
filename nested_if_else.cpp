#include <iostream>

int main() {
    int age, height;
    bool hasAdult;
    std::cin >> age >> height >> hasAdult;

    if (age >= 12) {
        if (height > 150) {
            if (age < 15) {
                if (hasAdult) {
                    std::cout << "You can ride with adult supervision!";
                } else {
                    std::cout << "Sorry, you need an adult with you";
                }
            } else {
                std::cout << "You can ride by yourself!";
            }
        } else {
            std::cout << "Sorry, you are not tall enough";
        }        
    } else {
        std::cout << "Sorry, you are too young";
    }
    return 0;
}