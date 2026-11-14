#include <iostream>
#include <string>
#include <limits>
#include "StudentManager.h"
using namespace std;

int main() {
    StudentManager manager;
    manager.loadFromFile("students.txt");
    int choice = 0;
    do{
        cout << "\n=== Student Management System===" << endl;
        cout << "1. Add student" << endl;
        cout << "2. Remove student" << endl;
        cout << "3. Search student" << endl;
        cout << "4. Show all students" << endl;
        cout << "0. Exit" << endl;
        cout << "Choose: ";
        if (!(cin >> choice)){
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = -1;
        }
        switch (choice) {
            case 1: {
                int id;
                string name;
                double grade;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter name: ";
                cin >> ws;
                getline(cin,name);
                cout << "Enter grade: ";
                while (!(cin >> grade)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Please enter a number (e.g. 85.5): ";
                }
                manager.addStudent(Student(id, name, grade));
                manager.saveToFile("students.txt");
                cout << "Student added." << endl;
                break;
            }
            case 2:{
                int id;
                cout << "Enter ID to remove: ";
                cin >> id;
                if (manager.removeStudent(id)){
                    manager.saveToFile("students.txt");
                    cout << "Student removed." << endl;
                } else {
                    cout << "No student with that ID." << endl;
                }
                break;
            }
            case 3: {
                int id;
                cout << "Enter ID to search: ";
                cin >> id;
                manager.searchById(id);
                break;
            }
            case 4:
            manager.displayAll();
            break;
            case 0:
            cout << "Goodbye!" << endl;
            break;
            default:
            cout << "Invalid choice. Try again." << endl;
        }
    } while (choice != 0);
    return 0;
}