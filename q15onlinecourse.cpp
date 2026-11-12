#include <iostream>
using namespace std;
class Student
{
protected:
    ;
    string name;
    int rollno;

public:
    ;
    void setStudent(string n, int roll)
    {
        name = n;
        rollno = roll;
    }
};
class Course
{
protected:
    ;
    string course;
    int fees;

public:
    ;
    void setCourse(string c, int f)
    {
        course = c;
        fees = f;
    }
};
class Enrollment : public Student, public Course
{
public:
    ;
    int totalfees;
    void setData(string n, int roll, string c, int f)
    {
        setStudent(n, roll);
        setCourse(c, f);
        totalfees = fees + 2500;
    }
    void display()
    {
        cout << "-/-----Details-----/-" << endl;
        cout << "Student name : " << name << endl;
        cout << "Roll number : " << rollno << endl;
        cout << "Course : " << course << endl;
        cout << "Course fees : " << fees << endl;
        cout << "Total fees : " << totalfees << endl;
    }
};
int main()
{
    Enrollment s1;
    s1.setData("Rahul", 32, "C++", 5000);
    s1.display();
    return 0;
}