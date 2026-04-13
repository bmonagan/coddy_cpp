#include <iostream>

int main() {
    int numLoops;
    int num;
    std::cin >> numLoops;
    int sum = 0;
    // Write your code below
    // Iterate numLoops times
    // In each iteration get the input using std::cin >> num;
    for (int i = 0; i < numLoops; i++){
        std::cin >> num;
        sum += num;
    }
    std::cout << sum;
    return 0;
}