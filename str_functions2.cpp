#include <iostream>
#include <string>

void stringSearchOperations(std::string str) {
    // Find first space
    int spacePos = str.find(" ");
    std::cout << "Space Found At: " << spacePos << std::endl;
    
    // Erase 4 characters from position 5
    str.erase(5, 4);
    std::cout << "After Erase: " << str << std::endl;
    
    // Check if contains "You"
    if (str.find("You") != -1) {
        std::cout << "Contains You: Found" << std::endl;
    } else {
        std::cout << "Contains You: Not Found" << std::endl;
    }
    
    // Clear string and check if empty
    str.clear();
    std::cout << "Is Empty: " << (str.empty() ? "true" : "false") << std::endl;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    stringSearchOperations(str);
    return 0;
}