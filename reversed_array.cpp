#include <iostream>
#include <vector>

int main() {
    int n;

    std::cin >> n;
    std::cin.ignore();
    double arr[n];

    for (int i = 0; i < n; i++) {
        double val;
        std::cin >> val;
        arr[i] = val;
    }

    double reverseArr[n];
    // Write your code below
    int j = 0;
    for (int i = n - 1; i>=0; i--) {
        reverseArr[j] = arr[i];
        j++;
    }


    for (int i = 0; i<n; i++) {
        std::cout << reverseArr[i] << std::endl;
    }
    return 0;
}