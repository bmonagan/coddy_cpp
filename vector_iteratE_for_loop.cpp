#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Read the number of products
    int n;
    cin >> n;
    
    // Create a vector to store product names
    vector<string> products;
    
    // Read product names and add them to the vector
    for (int i = 0; i < n; i++) {
        string product;
        cin >> product;
        products.push_back(product);
    }
    
    // TODO: Write your code below
    // Use a traditional for loop to iterate through the vector
    // and print each product with its position number
    for (int i = 0; i < n; i++) {
        cout << "Product " << i+1 << ": " << products[i] << endl;
    } 
    
    return 0;
}