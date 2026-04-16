#include <iostream>
#include <cstring>

void printStringInfo(char str[]) {
    // Print the string
    std::cout << "String: " << str<< std::endl;
    

    // Print the length of the string
    std::cout << "Length: " << strlen(str) << std::endl;

    // Print the character at index 4
    std::cout << "Character at index 4: " << str[4] << std::endl;
    

    // Modify the first character to 'X'
    str[0] = 'X';

    // Print the modified string
    std::cout << "Modified string: " << str;
}

int main() {
    char message[] = "Hello, World!";

    printStringInfo(message);

    return 0;
}