#include <iostream>
using namespace std;

int main() {
    cout << "Calculator App" << endl;
    float first_number;
    float second_number;
    cin >> first_number;
    cin >> second_number;
    float sum = first_number + second_number;
    float product = first_number * second_number;
    float division = first_number / second_number;
    float difference = first_number - second_number;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Product: " << product << endl;
    cout << "Division: " << division << endl;

    return 0;
}