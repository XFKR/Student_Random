#ifndef _STUDENT_H
#define _STUDENT_H

#include<string>
class Student
{
private:
    int id;
    std::string name;
public:
    Student(std::string nm="unDefined", int d=-1): name(nm), id(d){};
    ~Student(){};
    int getid();
    std::string getname();
};

#endif
