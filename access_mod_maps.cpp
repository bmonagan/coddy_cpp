#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Read the number of initial products
    int n;
    cin >> n;
    
    // Create the inventory map
    map<string, int> inventory;
    
    // Read initial products and quantities
    for (int i = 0; i < n; i++) {
        string product;
        int quantity;
        cin >> product >> quantity;
        // TODO: Add the product to the inventory map
        inventory[product] = quantity;
    }
    
    // TODO: Print the initial inventory
    cout << "Initial Inventory:" << endl;
    for (const auto& pair: inventory) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    // Read product to update and new quantity
    string updateProduct;
    int newQuantity;
    cin >> updateProduct >> newQuantity;
    
    // TODO: Update the product quantity in the map
    inventory[updateProduct] = newQuantity;

    // TODO: Print the updated inventory
    cout << "Updated Inventory:" << endl;
    for (const auto& pair: inventory) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    return 0;
}