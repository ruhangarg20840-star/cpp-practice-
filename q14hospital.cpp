#include <iostream>
using namespace std;

class Person
{
protected:
    ;
    string name;
    int age;

public:
    ;
    void setPerson(string n, int a)
    {
        name = n;
        age = a;
    }
};
class Doctor : public Person
{
    string specialisation;

public:
    ;
    void setdoctor(string n, int a, string s)
    {
        setPerson(n, a);
        specialisation = s;
    }
    void display()
    {
        cout << "-/----Doctor Details----/-" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Specialisation : " << specialisation << endl;
    }
};
class Nurse : public Person
{
    string department;

public:
    ;
    void setNurse(string n, int a, string d)
    {
        department = d;
        setPerson(n, a);
    }
    void display()
    {
        cout << "-/----Nurse Details----/-" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Department : " << department << endl;
    }
};
class Patient : public Person
{
    string disease;

public:
    ;
    void setPatient(string n, int a, string d)
    {
        setPerson(n, a);
        disease = d;
    }
    void display()
    {
        cout << "-/----Patient Details----/-" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Disease : " << disease << endl;
    }
};
int main()
{
    Doctor d;
    Patient p;
    Nurse n;
    
    d.setdoctor("Dr. Mukul", 35, "Nuerologist");
    p.setPatient("Rahul", 23, "Dengue");
    n.setNurse("Neha", 34, "ICU");

    d.display();
    n.display();
    p.display();
    return 0;
}