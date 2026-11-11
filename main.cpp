#include <iostream>
#include "StudentManager.h"
using namespace std;

int main() {
    StudentManager manager;

    manager.addStudent(Student(1, "Amina", 85.5));
    manager.addStudent(Student(2, "John", 72.0));
    manager.addStudent(Student(3, "Grace", 91.25));
    
    cout << "All students:" << endl;
    manager.displayAll();

    manager.removeStudent(2);

    cout << "After removing student 2:" << endl;
    manager.displayAll();

    return 0;
}