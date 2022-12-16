#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string passengerID;
    char packageType;
    string mealCombo;
    int adult, child, mealComboQty;
    float adultPrice, childPrice, total, totalMealCombo, totalAll;

    char choice = 'y';

    while (choice != 'n') {
        cout << "Enter passenger ID: ";
        cin >> passengerID;

        cout << "Enter package type (G/P): ";
        cin >> packageType;
        packageType = toupper(packageType);

        cout << "Enter number of adult passengers: ";
        cin >> adult;

        cout << "Enter number of child passengers: ";
        cin >> child;

        cout << "Do you want add on a meal combo (Yes/No)? ";
        cin >> mealCombo;

        for (int i = 0; i < mealCombo.length(); i++) {
            mealCombo[i] = toupper(mealCombo[i]);
        }

        totalMealCombo = 0;

        if (mealCombo == "YES") {
            cout << "Enter quantity meal combo: ";
            cin >> mealComboQty;

            totalMealCombo = mealComboQty * 7.00;
        }

        if (packageType == 'G') {
            adultPrice = 59.00;
            childPrice = 34.00;

            total = (adult * adultPrice) + (child * childPrice);
        } else if (packageType == 'P') {
            adultPrice = 79.00;
            childPrice = 44.00;

            total = (adult * adultPrice) + (child * childPrice);
        } else {
            cout << "Invalid package type" << endl;
        }

        totalAll = total + totalMealCombo;

        cout << "---------------------------------------------" << endl;
        cout << "ETS TICKET INFORMATION - Butterworth to Kuala Lumpur" << endl;
        cout << "---------------------------------------------" << endl;

        cout << "\nPASSENGER ID      : " << passengerID << endl;
        cout << "\nNumber of Adults    : " << adult << endl;
        cout << "Number of Children  : " << child << endl;
        cout << "\nTotal Ticket Price  : RM " << total << endl;
        cout << "Meal Combo Price    : RM " << totalMealCombo << endl;
        cout << "Net Ticket Price    : RM " << totalAll << endl;

        cout << "Do you want to continue (Y/N)? ";
        cin >> choice;
        choice = tolower(choice);
    }

    return 0;
}