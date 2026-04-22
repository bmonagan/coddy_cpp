#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input values
    int val1, val2, val3, val4, val5;
    cin >> val1 >> val2 >> val3 >> val4 >> val5;
    
    // TODO: Write your code below
    // Create a vector named 'numbers' and initialize it with the input values'
    vector<int> numbers = {val1,val2,val3,val4,val5}; 
    // Print each element using the required format
    for (int i = 0; i < numbers.size(); i++) {
        cout<<"Element "<< i << ": " << numbers[i] << endl;
    }
    // Print the vector size
    cout<< "Vector size: " <<  numbers.size();
    return 0;
}