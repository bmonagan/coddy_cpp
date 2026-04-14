#include <iostream>
#include <string>

bool is_valid(std::string username, std::string password) {
    // Write your code below
    if (username == "admin") {
        return true;
    }
    
    if (username == "user" && password == "qwerty") {
        return true;
    }
    
    return false;
}

int main() {
    std::string user, pass;
    std::cin >> user;
    std::cin >> pass;
    bool res = is_valid(user, pass);
    std::cout << (res ? "true" : "false");
    return 0;
}