#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int len;
    cout << "Enter lenght of the array : ";
    cin >> len;
    int arr[len];
    cout << "Enter elements : ";
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    int largest = arr[0];
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int long secondlargest = INT64_MIN;
    cout << secondlargest << endl;
    for (int i = 0; i < len; i++)
    {
        if (largest > arr[i] && arr[i] > secondlargest)
        {
            secondlargest = arr[i];
        }
    }
    cout << secondlargest;
    // cout << largest;
    return 0;
}
// largest = 34
// secondlargest = 34
