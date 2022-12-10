#include <iostream>
#include <string>

using namespace std;

int main() {
    int students, questions, mark;
    int total = 0;

    cout << "Enter the number of students: ";
    cin >> students;

    cout << "Enter the number of questions in the exam: ";
    cin >> questions;

    for (int i = 0; i < students; i++) {
        string name;

        cout << "Enter the name of the student: ";
        cin >> name;

        for (int j = 0; j < questions; j++) {
            cout << "Enter the marks for question no. " << j + 1 << ": ";
            cin >> mark;

            total += mark;
        }
        cout << "Total marks for student named " << name << " is " << total << endl;
    }

    return 0;
}