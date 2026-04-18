#include <iostream>
#include <string>

void stringOperations(std::string str) {
    // 1. Print length of the string
    std::cout << "Length: " << str.length() << std::endl;
    
    // 2. Append " - Modified" to the string
    str.append(" - Modified");
    std::cout << "Append: " << str << std::endl;
    
    // 3. Insert "C++ " at the beginning
    str.insert(0, "C++ ");
    std::cout << "Insert: " << str << std::endl;
    
    // 4. Extract substring of length 5 starting at position 5
    std::string substring = str.substr(5, 5);
    std::cout << "Extract: " << substring << std::endl;
    
    // 5. Replace substring at position 5 with "Awesome"
    str.replace(5, 5, "Awesome");
    std::cout << "Replace: " << str << std::endl;
}

int main() {
    std::string str;
    std::getline(std::cin, str);
    stringOperations(str);
    return 0;
}