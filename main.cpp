#include <iostream>
#include <string>
#include "Person.h"
#include "Student.h"
#include "Instructor.h"
#include "Course.h"


using namespace std;
class Person{
    void display() virtual{
        cout << "name is " << name << ", id is "<< id << endl;
    }
        string name;
        int id;

    public:
    Person(){
        
    }
    Person(string n, int id){
        name = n;
        this->id = id;
    }
    ~Person(){
        delete *Person;
    }
    virtual void roleInfo(){
    
        cout << "name is " << name << ", id is "<< id << endl;
    }
};
class Student{
    Student(){}
    Student(int yL, string m){
        yearLevel = yL;
        major = m;
    }
    ~Student(){
        delete *Student;
    }
    void roleInfo() override{
                cout << "Year level is: " << yearLevel << ", major is " << major << endl;

        
    }
    void display() override{
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
        delete *Instructor;    
    }
    void roleInfo() override{
        cout << "department :" << department<< " experience: " <<experienceYears << endl;

    }
    void display() override{
        cout << "department :" << department<< " experience: " <<experienceYears << endl;
    }
};
class Course{
     Course(string cC, string cN, int mS){
         courseCode = cC;
         courseName = cN;
         maxStudents = mS;
    }
    addStudent(const Student& s){
        students[s];
    }
    void displayCourseInfo(){
        cout << "CourseCode: " << courseCode << endl;
        cout << "Course Name: " << courseName << endl;
        cout << "Current students" << currentStudents << endl;
    }
 
    Course(){
        
    }
    ~Course(){
        delete students[];
    }
};
int main(){
    Course c1("23A8dS", "CS", 400);
    c1.displayInfo();
    c1.roleInfo();
    Course c2("23WA8dS", "BI", 200);
    c2.displayInfo();
    c2.roleInfo();
    
    Instructor i1("Finance", 3);
    i1.displayInfo();
    i1.roleInfo();
    
    Student s1(2, "CS");
    s1.displayInfo();
    s1.roleInfo();

    return 0;
}
// ==================== Person Class Implementation =========================



// ==================== Student Class Implementation ====================






// ==================== Instructor Class Implementation ====================






// ==================== Course Class Implementation ====================








// ==================== Main Function ====================

