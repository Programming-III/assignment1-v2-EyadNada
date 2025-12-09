#ifndef PERSON_H
#define PERSON_H

#include <string>
using namespace std;

//#write Person class here

class Person{
    private:
        std::string name;
        int id;
    Person(){};
    Person(string n, int id){
        name = n;
        this->id = id;
    };
    ~Person(){}
    

    virtual void display();
    virtual void roleInfo();
};










#endif
