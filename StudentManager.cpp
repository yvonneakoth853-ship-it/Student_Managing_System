#include "StudentManager.h"
#include <iostream>
using namespace std;

void StudentManager::addStudent(const Student& s) {
    students.push_back(s);
}
bool StudentManager::removeStudent(int id) {
for (size_t i=0; i < students.size(); i++) {
    if (students[i].getId() == id) {
        students.erase(students.begin() +1);
        return true;
    }
}
return false;
}
void StudentManager::displayAll() const {
    if (students.empty()) {
        cout << "No Students yet." << endl;
        return;
    }
    for (const Student& s : students){
        s.display();
        cout << "-----" << endl;
    }
}
void StudentManager::searchById(int id) const{
    for (const Student& s : students){
        if (s.getId() == id){
            cout << "Student found:" <<endl;
            s.display();
            return;
        }
    }
    cout << "No student with ID " << id << " found. " << endl;
}