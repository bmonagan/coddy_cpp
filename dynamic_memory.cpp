#include <iostream>
using namespace std;

int main() {
    // Read input
    int value;
    cin >> value;
    
    // TODO: Write your code below
    // Use 'new' to dynamically allocate memory for an integer
    // Store the pointer in a variable named 'numPtr'
    // Assign the input value to the dynamically allocated memory
    int* numPtr = new int;
    *numPtr = value;
    
    // Output the result
    cout << "Value: " << *numPtr << endl;
    cout << "Address: " << numPtr << endl;
    
    return 0;
}