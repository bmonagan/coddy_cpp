#include <iostream>

int main() {
    bool b1 = true;
    bool b2 = true;
    bool b3 = false;
    
    bool b4 = b1 && b2 && (!b3);
    std::cout << "b4 = " << b4;
    return 0;
}