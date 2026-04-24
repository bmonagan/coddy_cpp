#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Read the number of cities
    int n;
    cin >> n;
    
    // Create a vector to store city names
    vector<string> cities;
    
    // Read city names and add them to the vector
    for (int i = 0; i < n; i++) {
        string city;
        cin >> city;
        cities.push_back(city);
    }
    int counter = 0;
    // TODO: Write your code below
    // Use a range-based for loop to iterate through the cities vector
    // Print each city with its length using the specified format
    // After the loop, print the total number of cities processed
    for (const string& city: cities) {
        cout << "City: " << city << " (Length: " << city.length() << ")" << endl;
        counter++;
    }
    cout << "Total cities processed: " << counter;
    return 0;
}