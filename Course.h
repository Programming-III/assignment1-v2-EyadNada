#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here







class Course : public Student{
    private:
        string courseCode;
        string courseName;
        int maxStudents;
        Student* students;
    Course(){};
    Course(string cC, string cN, int mS){
         courseCode = cC;
         courseName = cN;
         maxStudents = mS;
    };
    ~Course(){}
    addStudent(const Student& s);
    displayCourseInfo();
};






#endif
