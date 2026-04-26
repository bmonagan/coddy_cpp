#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // Read the number of students
    int n;
    cin >> n;
    
    // Create the map to store grades
    map<string, int> grades;
    
    // TODO: Write your code here
    // Read each student's name and score, then add to the map
    for (int i = 0; i < n; i++) {
        string name;
        int grade;
        cin >> name;
        cin >> grade;
        grades[name] = grade;
    }

    
    // Print the results
    cout << "Student Grades:" << endl;
    // TODO: Use a range-based for loop to print each student's grade
    for (const auto& pair : grades){
        cout << pair.first << ": " << pair.second << endl;
     }
    
    
    // Print total number of students
    cout << "Total students: " << grades.size() << endl;
    
    return 0;
}