#include <iostream>

int main() {
    int wind;
    std::cin >> wind; // Don't change this line
    std::string status = "unset";
    if (wind < 8) {
        status = "Calm";
    } else if (wind <= 31) {
        status = "Breeze";
    } else if (wind <= 63) {
        status = "Gale";
    } else {
        status = "Storm";
    }
    
    
    // Don\'t change the line below
    std::cout << "status = " << status;
    return 0; 
}