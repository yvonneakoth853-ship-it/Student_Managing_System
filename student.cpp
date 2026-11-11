#include "Student.h"
#include<iostream>
using namespace std;

Student::Student(int id, const string& name, double grade){
    this->id=id;
    this->name=name;
    this->grade=grade;
}
void Student::display() const {
cout <<"ID:" << id << endl;
cout << "Name:" << name << endl;
cout << "Grade:" << grade << endl;
}
int Student::getId() const {
    return id;
}