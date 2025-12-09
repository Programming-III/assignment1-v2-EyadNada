#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here


class Student : public Person{
    protected:
    int yearLevel;
    string major;
    void display();

    public:
    Student();
    Student(int yL, string m);
    ~Student(){};
    void roleInfo() override;

};










#endif
