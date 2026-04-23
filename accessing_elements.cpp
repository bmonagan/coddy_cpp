#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input
    int n;
    cin >> n;
    
    vector<int> data;
    
    // Read n integers and add them to the vector
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        data.push_back(num);
    }
    
    int index1, index2;
    cin >> index1;
    cin >> index2;
    
    // TODO: Write your code below
    // Access elements using [] operator and .at() method
    // Store the accessed values in value1 and value2
    int value1 = data[index1];
    int value2 = data.at(index2);
    
    // Output the results
    cout << "Element at index " << index1 << ": " << value1 << endl;
    cout << "Element at index " << index2 << ": " << value2 << endl;
    cout << "First element: " << data[0] << endl;
    cout << "Last element: " << data[data.size()- 1]  << endl;
    
    return 0;
}