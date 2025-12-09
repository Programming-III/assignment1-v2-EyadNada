#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
#include <iostream>
#include <string>
using namespace std;
//#write Instructor class here



class Instructor : public Person{
protected:
    string department;
    int experience;
public:
    void display();
    Instructor();
    Instructor(string dep, int exp){
        department = dep;
        experience = exp;
    };
    ~Instructor();
    void roleInfo() override;
};








#endif
