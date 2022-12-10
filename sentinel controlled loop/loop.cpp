#include <iostream>
#include <string>

using namespace std;

int main() {

    int number;
    int totalEven = 0;
    int totalOdd = 0;

    cout << "Enter a number: ";
    cin >> number;

    while (number != -1) {
        if (number % 2 == 0) {
            totalEven += number;
        } else {
            totalOdd += number;
        }
        cout << "Enter a number: ";
        cin >> number;
    }

    cout << "Total of even numbers is " << totalEven << endl;
    cout << "Total of odd numbers is " << totalOdd << endl;

    return 0;
}