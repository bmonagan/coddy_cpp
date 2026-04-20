#include <iostream>
using namespace std;

int main() {
    // Read input values
    int initialValue, newValue;
    cin >> initialValue;
    cin >> newValue;
    
    // TODO: Write your code below
    // 1. Declare temperature variable and initialize with initialValue
    int temperature = initialValue;
    
    // 2. Create tempPtr pointer pointing to temperature
    int* tempPtr = &temperature;
    
    // 3. Print original value using pointer dereference
    cout << "Original value: " << *tempPtr << endl;
    
    // 4. Change temperature value through pointer using newValue
    *tempPtr = newValue;
    
    // 5. Print new value using pointer dereference
    cout << "New value: " << *tempPtr << endl;
    
    return 0;
}