#include <iostream>

using namespace std;

struct Student {
    int id;
    int semestersComplete;
    int creditsCompleted;
    float cgpa;
};

int main() {
    // Define an array to store records of students
    Student students[5] = {
        {1, 3, 60, 3.8},
        {2, 2, 40, 3.9},
        {3, 4, 70, 3.5},
        {4, 1, 20, 3.7},
        {5, 2, 35, 3.6}
    };

    cout << "Scholarship students (CGPA >= 3.75):" << endl;
    for (int i = 0; i < 5; ++i) {
        if (students[i].cgpa >= 3.75) {
            cout << "ID: " << students[i].id << endl;
        }
    }

    cout << "\nStudents with more than 50 credits completed:" << endl;
    for (int i = 0; i < 5; ++i) {
        if (students[i].creditsCompleted > 50) {
            cout << "ID: " << students[i].id << endl;
        }
    }

    cout << "\nStudents with minimum 2 semesters and minimum 28 credits:" << endl;
    for (int i = 0; i < 5; ++i) {
        if (students[i].semestersComplete >= 2 && students[i].creditsCompleted >= 28) {
            cout << "ID: " << students[i].id << endl;
        }
    }

    return 0;
}
