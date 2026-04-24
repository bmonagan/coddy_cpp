#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // Read number of elements to add
    int n;
    cin >> n;
    
    // Create an empty vector
    vector<int> myVector;
    
    // Read and insert n elements
    for (int i = 0; i < n; i++) {
        int element;
        cin >> element;
        // Insert element into vector
        myVector.push_back(element);
    }
    
    // Read number of elements to remove
    int m;
    cin >> m;
    
    // TODO: Write your code below
    // 1. Print initial vector size
    cout << "Initial size: " << myVector.size() << endl;
    // 2. For each element to remove, find it and use .erase() and print size after each removal
    for (int i = 0; i< m; i++) { 
        int x;
        cin >> x;
        auto it = find(myVector.begin(), myVector.end(),x);
        if (it !=myVector.end()) {
            myVector.erase(it);
        }
        cout << "After removing " << x <<": size = " << myVector.size() << endl;
    }
    // 3. Print remaining elements in the vector
    cout << "Remaining elements: ";
    for (int i = 0; i < myVector.size(); i++){
        cout << myVector[i] << " ";
    }
    return 0;
}