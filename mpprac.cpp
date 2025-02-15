#include <iostream>
#include <cctype>
#include <cstring>
#include <iomanip>
using namespace std;

struct Student {
    int studentID;
    char firstName[50];
    char lastName[50];
    float GPA;
};


void addStudent(Student students[], int &numStudents);
void displayStudents(const Student students[], int numStudents);
float calculateAverageGPA(const Student students[], int numStudents);
void findStudentsByLastName(const Student students[], int numStudents, const char lastName[]);

int main() {
    Student students[100]; 
    int numStudents = 0;
    int choice = 0;

    do {
        string choiceArr[] = {
            "Add a Student", 
            "Display Students", 
            "Calculate the average GPA", 
            "Find Students by Last Name", 
            "Exit"
        };
        
        int choiceArrSize = sizeof(choiceArr) / sizeof(choiceArr[0]);


        for (int i = 0; i < choiceArrSize; i++) {
            cout << i + 1 << ". " << choiceArr[i] << endl;
        }

        cout << "Please choose an option: ";
        cin >> choice;
        cin.ignore(); 

        switch (choice) {
            case 1:
                addStudent(students, numStudents);
                break;
            case 2:
                displayStudents(students, numStudents);
                break;
            case 3:
                cout << "Average GPA: " << calculateAverageGPA(students, numStudents) << endl;
                break;
            case 4: {
                char lastName[50];
                cout << "Enter last name: ";
                cin.getline(lastName, 50);
                findStudentsByLastName(students, numStudents, lastName);
                break;
            }
            case 5:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}


void addStudent(Student students[], int &numStudents) {
    if (numStudents >= 100) {
        cout << "Student list is full!\n";
        return;
    }

    Student p;
    cout << "Input Student Details:\n";

    cout << "Student ID: ";
    cin >> p.studentID;
    cin.ignore(); 

    cout << "First Name: ";
    cin.getline(p.firstName, 50);

    cout << "Last Name: ";
    cin.getline(p.lastName, 50);

    cout << "Student GPA: ";
    cin >> p.GPA;
    cin.ignore(); 


    students[numStudents] = p;
    numStudents++;

    cout << "Student added successfully!\n";
}


void displayStudents(const Student students[], int numStudents) {
    if (numStudents == 0) {
        cout << "No students to display.\n";
        return;
    }

    cout << "List of Students:\n";
   cout << left << setw(10) << "ID" 
         << setw(20) << "First Name" 
         << setw(20) << "Last Name" 
         << setw(10) << "GPA" << endl;
    cout << "------------------------------------------------------------\n";

    for (int i = 0; i < numStudents; i++) {
        cout << left << setw(10) << students[i].studentID 
             << setw(20) << students[i].firstName 
             << setw(20) << students[i].lastName 
             << setw(10) << students[i].GPA << endl;
    }
}

float calculateAverageGPA(const Student students[], int numStudents) {
    if (numStudents == 0) return 0.0;

    float finGPA = 0;
    for (int i = 0; i < numStudents; i++) {
        finGPA += students[i].GPA;
    }
    return finGPA / numStudents;
}


void findStudentsByLastName(const Student students[], int numStudents, const char lastName[]) {
    bool found = false;
    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].lastName, lastName) == 0) {
            cout << "ID: " << students[i].studentID << ", Name: " 
                 << students[i].firstName << " " << students[i].lastName 
                 << ", GPA: " << students[i].GPA << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "No students found with last name: " << lastName << endl;
    }
}

