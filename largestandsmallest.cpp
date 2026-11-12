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
        cout << " Enter element : ";
        cin >> arr[i];
        cout << endl;
    }
    int largest = arr[0];
    int smallest = arr[0];
    for (int i = 0; i < len ; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            largest = arr[i + 1];
        }
        else
        {
            smallest = arr[i + 1];
        }
    }
    cout << "Output : " << endl << "Largest = " << largest << endl << "Smallest = " << smallest;
    return 0;
}