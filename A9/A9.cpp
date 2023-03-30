/*
Author: Michael Bottom

This program derives a class from another derived class, the original being class Employee. 
SalariedEmployee's private qualifier was changed to protected in order to access the salary 
variable. There is as member variable for the administrator's title, the company's area of 
responsibility, and the administrator's supervisor's name. There is a protected variable for 
the administrator's salary value. There are three member functions: to set the name of the 
supervisor of the administor, to enter data of the administrator, and to read the data of 
the administrator. There is also an overloaded function to print a check for the 
administrator.*/

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    Employee();
    Employee(const string& theName, const string& theSsn);
    string getName() const;
    string getSsn() const;
    double getNetPay() const;
    void setName(const string& newName);
    void setSsn(const string& newSsn);
    void setNetPay(double newNetPay);
    void printCheck() const;

private:
    string name;
    string ssn;
    double netPay;
};

class SalariedEmployee : public Employee {
public:
    SalariedEmployee();
    SalariedEmployee(const string& theName, const string& theSsn,
        double theWeeklySalary);
    double getSalary() const;
    void setSalary(double newSalary);
    void printCheck();

protected:
    double salary; //weekly

};

class Administrator : public SalariedEmployee {
public:
    Administrator(const string& theName, const string& theSsn,
        double theAnnualSalary);
    void setSupervisor(const string& newName);
    void dataEntry();
    void print();
    void printCheck();
    Administrator();


protected:
    double salaryAnnualAdmin;


private:
    string titleAdmin;
    string compAreaResponsibility;
    string supervisorOfAdmin;
};

// Employee class implementation
Employee::Employee() : name("None"), ssn("None"), netPay(0) {

}

Employee::Employee(const string& theName, const string& theNumber) : name(theName),
ssn(theNumber), netPay(0) {

}

string Employee::getName() const {
    return name;
}

string Employee::getSsn() const {
    return ssn;
}

double Employee::getNetPay() const {
    return netPay;
}

void Employee::setName(const string& newName) {
    name = newName;
}

void Employee::setSsn(const string& newSsn) {
    ssn = newSsn;
}

void Employee::setNetPay(double newNetPay) {
    netPay = newNetPay;
}

// SalariedEmployee class implementation
SalariedEmployee::SalariedEmployee() : Employee(), salary(0) {

}

SalariedEmployee::SalariedEmployee(const string& theName, const string& theNumber,
    double theWeeklyPay) : Employee(theName, theNumber), salary(theWeeklyPay) {

}

double SalariedEmployee::getSalary() const {
    return salary;
}

void SalariedEmployee::setSalary(double newSalary) {
    salary = newSalary;
}

void SalariedEmployee::printCheck() {
    setNetPay(salary);
    cout << "\n________________________________________________\n";
    cout << "Pay to the order of " << getName() << endl;
    cout << "The sum of " << getNetPay() << " Dollars\n";
    cout << "_________________________________________________\n";
    cout << "Check Stub NOT NEGOTIABLE \n";
    cout << "Administrator Number: " << getSsn() << endl;
}

// Administrator class implementation
Administrator::Administrator() : SalariedEmployee(), titleAdmin("None"),
    compAreaResponsibility("None"), supervisorOfAdmin("None") {

}

Administrator::Administrator(const string& theName, const string& theSsn, double theAnnualSalary) :
    SalariedEmployee(theName, theSsn, theAnnualSalary), titleAdmin("None"),
    compAreaResponsibility("None"), supervisorOfAdmin("None") {

}

void Administrator::setSupervisor(const string& newName) {
    supervisorOfAdmin = newName;
}

void Administrator::dataEntry() {
    cout << endl << "Data Entry
    cout << endl << "What is the title of the Administrator: " << endl;
    getline(cin, titleAdmin);
    cout << endl << "What is the company's area of responsibility: " << endl;
    getline(cin, compAreaResponsibility);
    cout << endl << "What is the name of the Administrator's supervisor: " << endl;
    getline(cin, supervisorOfAdmin);
}

void Administrator::print() {
    cout << endl << "The Administrator's name is: " << getName();
    cout << endl << "The Administrator's title is: " << titleAdmin;
    cout << endl << "The company's area of responsibility is: " << compAreaResponsibility;
    cout << endl << "The Administrator's supervisor is: " << supervisorOfAdmin;
    cout << endl;
}

void Administrator::printCheck() {
    setNetPay(getSalary() / 52.0);
    cout << "\n________________________________________________\n";
    cout << "Pay to the order of " << getName() << endl;
    cout << "The sum of " << getNetPay() << " Dollars\n";
    cout << "_________________________________________________\n";
    cout << "Check Stub NOT NEGOTIABLE \n";
    cout << "Administrator Number: " << getSsn() << endl;
}

int main() {
    cout << "Entering data for a new Administrator...";
    Administrator Louis("Louis Watson", "455760132", 45000);
    Louis.printCheck();
    Louis.dataEntry();
    Louis.print();
    Louis.printCheck();
    return 0;
}
