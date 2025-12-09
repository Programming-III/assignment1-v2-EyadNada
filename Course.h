#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"
using namespace std;
//#write your code here







class Course : public Student{
    protected:
        string courseCode;
        string courseName;
        int maxStudents;
        Student* students;

public:
    Course();
    Course(string cC, string cN, int mS);
    ~Course();
    void addStudent(const Student& s);
    void displayCourseInfo();
};






#endif
