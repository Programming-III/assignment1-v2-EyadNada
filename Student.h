#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include <string>
#using namespace std;
//#write student class here


class Student : public Person{
    
    int yearLevel;
    std::string major;
    void display();
    Student(){

    }
    Student(int yL, string m){
        yearLevel = yL;
        major = m;
    }
    ~Student(){}

};










#endif
