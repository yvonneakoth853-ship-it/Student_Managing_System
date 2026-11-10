#pragma once
#include <string>

class Student {
private:
    int id;
    std::string name;
    double grade;

public:
    Student(int id, const std::string& name, double grade);

    int getId() const;
    std::string getName() const;
    double getGrade() const;

    void setName(const std::string& name);
    void setGrade(double grade);
    void display() const;
};