#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> tasks;
    
    cout << "Welcome to Task List Tool!" << endl;
    cout << endl;
    cout << "Menu Options:" << endl;
    cout << "1. Add Task" << endl;
    cout << "2. View Tasks" << endl;
    cout << "3. Quit" << endl;
    cout << endl;
    cout << "Task list system initialized and ready!" << endl;
    
    string taskDescription;
    getline(cin, taskDescription);
    
    tasks.push_back(taskDescription);
    
    cout << "Task \"" << taskDescription << "\" added successfully!" << endl;
    cout << "Total tasks: " << tasks.size() << endl;
    
    return 0;
}