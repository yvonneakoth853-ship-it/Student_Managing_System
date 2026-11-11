#pragma once
#include <vector>
#include "student.h"

class StudentManager{
    private:
    std::vector<Student> students;

    public:
    void addStudent(const Student& s);
    bool removeStudent(int id);
    void displayAll() const;
};