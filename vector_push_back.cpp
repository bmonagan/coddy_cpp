#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read the number of elements to add
    int n;
    cin >> n;
    
    // Create an empty vector
    vector<int> numbers;
    
    // TODO: Write your code here
    // Read n numbers and add them to the vector using push_back()
    // Print the required output after each addition
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        numbers.push_back(x);
        cout << "Added " << x << ", size is now " << numbers.size() << endl;
    }
    
    // Print final vector
    cout << "Final vector: ";
    // TODO: Print all elements separated by spaces
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] <<" ";
    }
    
    return 0;
}