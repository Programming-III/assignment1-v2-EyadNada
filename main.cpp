#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
class Person{
    void display(){
        cout << "name is " << name << ", id is "<< id << endl;
    }
};
class Student{
    void display(){
        cout << "Year level is: " << yearLevel << ", major is " << major << endl;
    }
};
class Instructor{
Instructor(){
}
    Instructor(string dep, int exp){
        department = dep;
        experience = exp;
    }
    ~Instructor(){
        delete Instructor*;    
    }
    void roleInfo() override{
        cout << "department :" << department<< " experience: " <<experienceYears << endl;

    }
    void display(){
        cout << "department :" << department<< " experience: " <<experienceYears << endl;
    }
};
class Course{
     Course: Course(string cC, string cN, int mS){
         courseCode = cC;
         courseName = cN;
         maxStudents = mS;
    }
    addStudent(const Student& s){
        
    }
    void displayCourseInfo(){
        cout << "CourseCode: " << courseCode << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Current students" << currentStudents << endl;
    }
};
int main(){
    Course c1;
    c1.displayInfo();
    c1.roleInfo();
    Instructor i1;
    i1.displayInfo();
    i1.roleInfo();
    Student s1;
    s1.displayInfo();
    s1.roleInfo();

    return 0;
}
// ==================== Person Class Implementation =========================








// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================

