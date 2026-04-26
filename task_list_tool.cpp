#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> tasks;
    
    std::cout << "Welcome to Task List Tool!" << std::endl;
    std::cout << std::endl;
    std::cout << "Menu Options:" << std::endl;
    std::cout << "1. Add Task" << std::endl;
    std::cout << "2. View Tasks" << std::endl;
    std::cout << "3. Quit" << std::endl;
    std::cout << std::endl;
    std::cout << "Task list system initialized and ready!" << std::endl;
    
    int n;
    std::cin >> n;
    
    for (int i = 0; i < n; i++) {
        std::string task;
        std::cin >> task;
        tasks.push_back(task);
    }
    
    if (tasks.empty()) {
        std::cout << "No tasks available." << std::endl;
    } else {
        std::cout << "Your Tasks:" << std::endl;
        for (int i = 0; i < tasks.size(); i++) {
            std::cout << (i + 1) << ". " << tasks[i] << std::endl;
        }
        std::cout << "Total tasks: " << tasks.size() << std::endl;
    }
    
    return 0;
}