//
// Created by Owner on 11/14/2017.
//

#ifndef MEMORY_PERSON_H
#define MEMORY_PERSON_H
#include<iostream>
//#include "Resource.h"
#include <memory>   // For smart pointers
using namespace std;


class Person
{
private:
    string firstName;
    string lastName;
    int arNum;
    // Resource *pResource;     // If not using smart pointer
    //shared_ptr<Resource> pResource;     // Declare a share pointer
public:
    Person(string fn, string ln, int a);
    // Person(const Person &p);     Copy constructor
    ~Person();
    string getName();     // Return first and last name
    // Setter and getter for the arNum
    int getArNum();

    void setArNum(int arNum);

    const string &getFirstName();

    void setFirstName(string &firstName);

    // Operator overload for < and >
    bool operator <(Person &p);
    bool operator < (int n);
    friend bool operator < (int n, Person &p);

    // These should work with 1) int < person
    // 2) person < int, 3) int > person, 4) person > int

    //void AddResource();

    //Person& operator = (const Person &p);

    //string getResourceName();
};
bool operator < (int n, Person &p);
#endif //MEMORY_PERSON_H
