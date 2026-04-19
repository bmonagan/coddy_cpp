#include <iostream>
#include <vector>
#include <string>

int main() {
    int n1;
    int n2;

    std::cin >> n1;
    std::cin >> n2;
    std::cin.ignore();
    int arr1[n1];
    int arr2[n2];

    for (int i = 0; i < n1; i++) {
        int val;
        std::cin >> val;
        arr1[i] = val;
    }

    for (int i = 0; i < n2; i++) {
        int val;
        std::cin >> val;
        arr2[i] = val;
    }

    // Write your code below using arr1 and arr2
    bool found = false;
    // If arr2 is larger than arr1, pattern can't exist
    if (n2 > n1) {
        std::cout << "false" << std::endl;
        return 0;
    }
    // Check each possible starting position in arr1
    for (int i = 0; i <= n1 - n2; i++) {
        bool matchFound = true;
        // Compare elements starting from position i
        for (int j = 0; j < n2; j++) {
            if (arr1[i + j] != arr2[j]) {
                matchFound = false;
                break;
            }
        }
        
        if (matchFound) {
            found = true;
            break;
        }
    }
    
    std::cout << (found ? "true" : "false") << std::endl;

    return 0;
}