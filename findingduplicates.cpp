#include <iostream>
using namespace std;
int main()
{
    int len;
    cout << "Enter lenght of array : ";
    cin >> len;
    int arr[50];
    for (int i = 0; i < len; i++)
    {
        cout << "Enter element : ";
        cin >> arr[i];
        cout << endl;
    }
    int found = 0;
    for (int i = 0; i < len; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        int count = 1;
        for (j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count > 1)
        {
            cout << arr[i] << " ";
            found = 1;
        }
    }
    if (found == 0)
    {
        cout << "No duplicates found";
    }
}