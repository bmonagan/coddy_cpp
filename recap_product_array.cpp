#include <iostream>
#include <vector>

double prod(double arr[], int size) {
    double product = arr[0];
    for (int i = 1; i < size; i++){
        product *= arr[i];

    }
    return product;
}

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

    double result = prod(arr, n);
    std::cout << "Product of array elements: " << result << std::endl;
    return 0;
}