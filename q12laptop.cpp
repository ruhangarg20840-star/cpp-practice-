#include <iostream>
using namespace std;
class Processor
{
protected:
    ;
    string name;

public:
    ;
    void setname(string n)
    {
        name = n;
    }
};
class Battery
{
protected:
    ;
    int battery;

public:
    ;
    void setbattery(int b)
    {
        battery = b;
    }
};
class Laptop : public Processor, public Battery
{
public:
    ;
    void display()
    {
        cout << "Processor : " << name << endl;
        cout << "Battery runtime : " << battery << " hours" << endl;
    }
};
int main()
{
    Laptop l;
    string pro;
    int time;
    cout << "Enter processor name : ";
    cin >> pro;
    cout << "Enter battery runtime in hours : ";
    cin >> time;
    l.setname(pro);
    l.setbattery(time);
    l.display();
    return 0;
}