#include <iostream>
using namespace std;
int main()
{
    int len;
    cout << "Enter lenght of array : ";
    cin >> len;
    cout << endl;
    int arr[len];
    cout << "Enter elements : " << endl;
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    int temp = arr[len - 1];
    arr[len - 1] = arr[0];
    for (int i = 0; i < len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[len - 2] = temp;
    cout << endl;
    for (int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}