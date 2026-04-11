#include <iostream>
#include <iomanip>
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
    cout << fixed << setprecision(2) << "Sum: " << sum << endl;
    cout << fixed << setprecision(2) << "Difference: " << difference << endl;
    cout << fixed << setprecision(2) << "Product: " << product << endl;
    cout << fixed << setprecision(2) << "Division: " << division << endl;

    return 0;
}