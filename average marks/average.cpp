#include <iostream>
#include <string>

using namespace std;

int main() {
    int students, questions;
    int total = 0;
    float average = 0;
    int above80 = 0;
    int totalMarks = 0;

    cout << "Enter the number of students: ";
    cin >> students;

    string* names = new string[students];

    cout << "Enter the number of questions in the exam: ";
    cin >> questions;

    int* marks = new int[questions];

    for (int i = 0; i < students; i++) {
        total = 0;

        cout << "\nEnter the name of the student: ";
        cin >> names[i];

        for (int j = 0; j < questions; j++) {
            cout << "Enter the marks for question no. " << j + 1 << ": ";
            cin >> marks[j];

            total += marks[j];
        }
        if (total >= 80) {
            above80++;
        }
        cout << "Total marks for student named " << names[i] << " is " << total << endl;
        totalMarks += total;
    }

    float averageMarks = totalMarks / (float)students;

    cout << "\nAverage marks for all students is " << averageMarks << endl;
    cout << "No. of students with marks 80 and above is " << above80 << endl;

    return 0;
}