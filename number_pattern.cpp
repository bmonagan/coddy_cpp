#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;
    int rows = n / 2 + 1;
    for (int i = 0; i < rows; i++) {
        std::string stars(2 * (i + 1) - 1, '*');
        std::cout << stars << std::endl;
    }
    return 0;
}