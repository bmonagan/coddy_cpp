#include <iostream>
#include <string>

int main() {
    
    // Prompt the user to enter their name
    std::cout << "Enter your name: ";
    
    // Read the user's name
    std::string name;
    std::cin >> name;
    // Print the greeting message
    std::cout << "Hello," << name;
    
    return 0;
}