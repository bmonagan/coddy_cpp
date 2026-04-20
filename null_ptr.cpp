#include <iostream>
#include <string>
using namespace std;

int main() {
    // Read input
    string input;
    cin >> input;
    
    // Declare the data variable
    int data = 42;
    
    // Declare a pointer named ptr
    int* ptr;
    
    // Check the input and assign appropriate value to ptr
    if (input == "valid") {
        ptr = &data;
    } else {
        ptr = nullptr;
    }
    
    // Use if-statement to safely check and use the pointer
    if (ptr != nullptr) {
        cout << "Value: " << *ptr << endl;
    } else {
        cout << "Pointer is null - cannot dereference" << endl;
    }
    
    return 0;
}