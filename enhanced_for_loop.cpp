#include <iostream>
#include <string>


int main() {
    // Initialize the fruits array
    std::string fruits[] = {"apple", "banana", "orange", "grape", "kiwi"};

    // Use an enhanced for loop to iterate over the array
    for (std::string fruit: fruits){
        std::cout << fruit << std::endl;
    }
    
    return 0;
}