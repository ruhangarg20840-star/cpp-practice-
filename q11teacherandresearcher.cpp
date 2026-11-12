#include <iostream>
using namespace std;
class Teacher
{
protected:
    ;
    string subject;

public:
    ;
    void setsub(string sub)
    {
        subject = sub;
    }
};
class Researcher
{
protected:
    ;
    string area;

public:
    ;
    void setarea(string ar)
    {
        area = ar;
    }
};
class Professor : public Teacher, public Researcher
{
public:
    ;
    void display()
    {
        cout << subject << endl;
        cout << area << endl;
    }
};
int main()
{
    Professor s;
    string sub;
    string area;
    cout << "Enter subject and research area : ";
    cin >> sub >> area;
    s.setsub(sub);
    s.setarea(area);
    s.display();
    return 0;
}