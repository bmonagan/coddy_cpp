#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Read number of initial contacts
    int n;
    cin >> n;
    
    // Create the contacts map
    map<string, string> contacts;
    
    // Read initial contacts
    for (int i = 0; i < n; i++) {
        string name, phone;
        cin >> name >> phone;
        // TODO: Add contact to the map
        contacts[name] = phone;
    }
    
    // Print initial directory
    cout << "Initial Contact Directory:" << endl;
    // TODO: Print all contacts using range-based for loop
    for (const auto& pair: contacts) {
        cout << pair.first << ": " << pair.second<< endl;
    }
    
    // Read number of contacts to remove
    int m;
    cin >> m;
    
    // Remove contacts
    for (int i = 0; i < m; i++) {
        string nameToRemove;
        cin >> nameToRemove;
        // TODO: Remove contact using .erase() method
        contacts.erase(nameToRemove);
    }
    
    // Print updated directory
    cout << "Updated Contact Directory:" << endl;
    // TODO: Print remaining contacts or "Directory is empty" if empty
    if (contacts.empty()) {
        cout << "Directory is empty";
        return 0;
    }
    for (const auto& pair: contacts) {
        cout << pair.first << ": " << pair.second<< endl;
    }

    
    return 0;
}