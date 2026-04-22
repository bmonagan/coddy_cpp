#include <iostream>
using namespace std;

int main() {
    // Read input values
    int firstValue, secondValue;
    cin >> firstValue;
    cin >> secondValue;
    
    // TODO: Write your code below
    // 1. Allocate memory using new and store in dynamicPtr
    int* dynamicPtr = new int;
    
    // 2. Assign firstValue to the allocated memory
    *dynamicPtr = firstValue;
    
    // 3. Print initial value
    cout << "Initial value: " << *dynamicPtr << endl;
    
    // 4. Update with secondValue
    *dynamicPtr = secondValue;
    
    // 5. Print updated value
    cout << "Updated value: " << *dynamicPtr << endl;
    
    // 6. Delete the memory and set pointer to nullptr
    delete dynamicPtr;
    dynamicPtr = nullptr;
    
    // 7. Print confirmation message
    cout << "Memory freed successfully" << endl;
    
    return 0;
}