#include <iostream>
using namespace std;
int main()
{
    int len;
    cout << "Enter the lenght of the array : ";
    cin >> len;
    cout << endl;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cout << "Enter element : ";
        cin >> arr[i];
        cout << endl;
    }
    int odd = 0;
    int even = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even = even + 1;
        }
        else
        {
            odd = odd + 1;
        }
    }
    cout << "Even = " << even << endl
         << "Odd = " << odd << endl;
    return 0;
}