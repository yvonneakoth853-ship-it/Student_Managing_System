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
    void searchById(int id) const;
    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};