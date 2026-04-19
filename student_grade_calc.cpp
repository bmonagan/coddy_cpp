#include <iostream>



double calculateAverageGrade(int grades[], int size) {
    // Check if array is empty
    if (size == 0) {
        return 0.0;
    }
    
    // Calculate sum of grades
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += grades[i];
    }
    
    // Calculate and return average
    return sum / size;

}

int main() {
    int n;

    std::cin >> n;
    std::cin.ignore();
    int arr[n];

    for (int i = 0; i < n; i++) {
        int val;
        std::cin >> val;
        arr[i] = val;
    }


    double averageGrade = calculateAverageGrade(arr, n);
    std::cout << "Average grade: " << averageGrade << std::endl;
    return 0;
}