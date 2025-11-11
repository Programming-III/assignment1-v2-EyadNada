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
    void display(){
        cout << "department :" << department<< " experience: " <<experienceYears << endl;
    }
};
class Course{
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
    Instructor i1;
    i1.displayInfo();
    Student s1;
    s1.displayInfo();
    return 0;
}
// ==================== Person Class Implementation =========================








// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================

