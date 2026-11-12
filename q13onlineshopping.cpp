#include <iostream>
using namespace std;

class Product
{
protected:
    ;
    string name;
    int price;

public:
    ;
    void setdata(string n, int pr)
    {
        name = n;
        price = pr;
    }
};
class Discountproduct : public Product
{
public:
    ;
    int discount;
    void setdiscount(int dis)
    {
        discount = dis;
    }
    void display()
    {
        int final = price - discount;
        cout << "Discounted price : " << final << endl;
    }
};
int main()
{
    Discountproduct p;
    string name;
    int price, discount;
    cout << "Enter product name ";
    cin >> name;
    cout << "Enter price and discount ";
    cin >> price >> discount;
    p.setdata(name, price);
    p.setdiscount(discount);
    p.display();
    return 0;
}