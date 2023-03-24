/*
Author: Michael Bottom
Assignment 7, Part 2

This program creates a class named Student, an integer named numClasses that tracks how many
courses the student is enrolled in, and a dynamic array of strings named classList that stores 
the names of the classes that the student is enrolled in. It has constructors, mutators, and 
accessor functions for the class. There is a function to take the input from the user for all 
of the necesary data, a funciton that restes the classList and number of classes, an overloaded 
assignment operator for assigning classes to a new copy of classList, and a class destructor. 
There is a main function to test the above functions.*/


#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

// Student class definition
class Student {
public:
    // Public member functions
    void setName(string userName);
    string getName();
    void setNumClasses(int userNum);
    int getNumClasses();
    void setClassList(int position, string className);
    void getClassList();
    Student();
    ~Student();
    Student& operator =(const Student& rtSide);

    void userEntry();
    void getAllClassList();
    void resetClassList();

private:
    // Private member variables
    string name;
    int numClasses;
    string *classList;
};

int main() {
    Student Sam;
    Student Karen;

    Sam.setName("Samuel Clarke");
    cout << Sam.getName() << endl;
    Sam.setNumClasses(3);
    cout << Sam.getNumClasses() << endl;
    Sam.setClassList(0, "Algorithms");
    Sam.setClassList(1, "Statistics");
    Sam.setClassList(2, "Data Structures");
    Sam.getClassList();
    cout << endl;
    Karen.userEntry();
    cout << endl;
    Karen.getClassList();
    cout << endl;
    Karen.getAllClassList();
    Karen.resetClassList();
    cout << endl;
    Karen.getAllClassList();

    return 0;
}

// Student class member functions implementation
Student::Student() : name(""), numClasses(0), classList(NULL) {

}

Student::~Student() {
    resetClassList();
    numClasses = 0;
    name = "";
}

void Student::setName(string userName) {
    name = userName;
}

string Student::getName(){
    return name;
}

void Student::setNumClasses(int userNum) {
    numClasses = userNum;
    classList = new string[numClasses];
}

int Student::getNumClasses() {
    return numClasses;
}

void Student::setClassList(int position, string className) {
    int posit = position;
    string cName = className;
    classList[posit] = cName;
}

void Student::getClassList() {
    cout << "Course List: " << endl;
    for (int i = 0; i < numClasses; i++) {
        cout << classList[i] << endl;
    }
}

void Student::userEntry() {
    cout << endl << "Enter student name: " << endl;
    getline(cin, name);
    cout << "Enter number of classes: " << endl;
    cin >> numClasses;
    cin.ignore();
    if (numClasses > 0) {
        classList = new string[numClasses];
        for (int i = 0; i < numClasses; i++) {
            cout << "Enter the name of class " << (i + 1) << " : ";
            getline(cin, classList[i]);
        }
    }
}

void Student::getAllClassList() {
    cout << endl << name << "'s" << " Course List: " << endl;
    for (int i = 0; i < numClasses; i++) {
        cout << classList[i] << endl;
    }
}

void Student::resetClassList() {
    numClasses = 0;
    delete[] classList;
}

Student& Student::operator =(const Student& rtSide) {
    numClasses = rtSide.numClasses;
    if (numClasses > 0) {
        classList = new string[numClasses];
        for (int i = 0; i < numClasses; i++) {
            classList[i] = rtSide.classList[i];
        }
    }
    return *this;
}

