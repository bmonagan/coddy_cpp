#include <iostream>
#include <string>

void printNTimes(std::string message, int n) {
    for (int i = 0; i < n; i++){
        std::cout << message << std::endl;
    }
}

int main() {
    std::string msg;
    int n;
    std::getline(std::cin, msg); 
    std::cin >> n;

    printNTimes(msg, n);
    return 0;
}