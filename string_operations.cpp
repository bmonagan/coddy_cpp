#include <iostream>
#include <string>

std::string concatenateStrings(std::string str1, std::string str2) {
    std::string string3 = str1 + " " + str2;
    return string3;
}

int main() {
    std::string firstName;
    std::string lastName;
    std::getline(std::cin, firstName);
    std::getline(std::cin, lastName); 

    // Call concatenateStrings and store the result in fullName
    std::string fullName = concatenateStrings(firstName, lastName);

    // Print fullName
    std::cout << fullName;
    

    return 0;
}