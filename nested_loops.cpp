#include <iostream>

int main() {
    int n;
    std::cin >> n;
    // Write your code below
    for (int i = 1; i < n; i ++){
        int j = n - i;
        std::cout << i << " " << j << std::endl;
    }

    return 0;
}