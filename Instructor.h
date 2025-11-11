#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"
using namespace std;
//#write Instructor class here



class Instructor : public Person{
    std::string department;
    int experience;
    void display();
    Instructor(){};
    Instructor(string dep, int exp){
        department = dep;
        experience = exp;
    };
    ~Instructor(){}
};








#endif
