#include <iostream>
using namespace std;

int main() {
    // TODO: Write your code below
    int score = 85;
    int* scorePtr = &score;
    std::cout << "Address: " << scorePtr; 
    
    return 0;
}