//
// Created by Owner on 11/14/2017.
//

#include "Person.h"
#include<iostream>
using namespace std;
/*!
 * Constructor
 * @param fn: first name argument
 * @param ln: last name argument
 * @param a: arbitrary number
 */
Person::Person(string fn, string ln, int a)
{
    firstName = fn;
    lastName = ln;
    arNum = a;
    //pResource = NULL;     Prior to C++11
    // Don't need for smart pointers
    // pResource = nullptr;
}
/*!
 * Destructor
 * Clean memory
 */
Person::~Person()
{
    // delete [] pResource      // IF pResource points to an array
    // Don't need with smart pointer because it deletes itself
    // If using smart pointers you should have NO deletes in your code
    // delete pResource;
}
/*!
 * Get person's name
 * @return: Return person's name
 */
string Person::getName()
{
    return firstName + " " + lastName;
}
/*!
 * Get arbitrary number
 * @return: Return arbitrary number
 */
int Person::getArNum()
{
    return arNum;
}
/*!
 * Set arbitrary number
 * @param arNum: arbitrary number argument
 */
void Person::setArNum(int arNum)
{
    Person::arNum = arNum;
}
/*!
 * Compare person < person
 * @param p: reference to person
 * @return: true or false
 */
bool Person::operator<(Person &p)
{
    return arNum < p.arNum;
}
/*!
 * Compare Person < int
 * @param n: integer number
 * @return: true or false
 */
bool Person::operator<(int n)
{
    return arNum < n;
}
/*!
 * Compare int < Person
 * @param n: integer number
 * @param p: reference to person
 * @return: true or false
 */
bool operator<(int n, Person &p)
{
    return n < p.arNum;
}
/*!
 * Function to add resource
 */
/*
void Person::AddResource()
{
    // It only lives in this block
    //Resource r("Hello");
    //pResource = &r;

    // We use "new" instead so it lives past the block instead of dying
    // This will survive
    // Pointer to an object of type resource
    // delete pResource;        // Delete not needed with smart pointers

    pResource.reset();      // Instead of delete, reset

    // pResource = new Resource("Resource for " + getName());
    pResource = make_shared<Resource>("Resource for " + getName());     // Makes new memory instead of new
}
/*!
 * Get first name
 * @return: first name
 */
const string &Person::getFirstName()
{
    return firstName;
}
/*!
 * Set first name
 * @param firstName
 */
void Person::setFirstName(string &firstName)
{
    Person::firstName = firstName;
}

/*!
 * Get resource name
 * @return
 */
/*
string Person::getResourceName()
{
    return pResource->getName();
}
*/
///*!
// * Copy constructor
// * @param p: Person object to be copied
// */
//Person::Person(const Person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNum = p.arNum;
//    // Do not copy the reference.
//    // You need to create your own memory. Your own copy.
//    pResource = new Resource(p.pResource->getName());
//}
///*!
// * Operator overload for two objects
// * @param p: object of person argument
// * @return: new object that was assigned
// */
//Person &Person::operator=(const Person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNum = p.arNum;
//    // Clear everything first
//    delete pResource;
//    pResource = new Resource(p.pResource->getName());
//
//    return *this;       // Return yourself
//}
