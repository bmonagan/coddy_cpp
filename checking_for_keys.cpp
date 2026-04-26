#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Read number of books
    int n;
    cin >> n;
    
    // Create the library map
    map<string, int> library;
    
    // Read book information and populate the map
    for (int i = 0; i < n; i++) {
        string title;
        int copies;
        cin >> title >> copies;
        library[title] = copies;
    }
    
    // Read number of book requests
    int m;
    cin >> m;
    
    // Process each book request using .count() method
    for (int i = 0; i < m; i++) {
        string bookTitle;
        cin >> bookTitle;
        
        if (library.count(bookTitle)) {
            cout << "Book \"" << bookTitle << "\" is available with " << library[bookTitle] << " copies" << endl;
        } else {
            cout << "Book \"" << bookTitle << "\" is not available in the library" << endl;
        }
    }
    
    return 0;
}