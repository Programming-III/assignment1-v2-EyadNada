#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here

class Person{
    protected:
        string name;
        int id;

    public:
    Person();
    Person(string n, int id);
    ~Person();
    virtual void display();
    virtual void roleInfo();
};










#endif
