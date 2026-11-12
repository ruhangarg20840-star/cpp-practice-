#include <iostream>
using namespace std;
int main()
{
    int len;
    cout << "input the lenght of the array : ";
    cin >> len;
    int arr1[len], arr2[len];
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        cout << "Enter element ";
        cin >> arr1[i];
        cout << endl;
    }
    for (int i = 0; i < len; i++)
    {
        arr2[i] = arr1[i];
    }
    for (int i = 0; i < len-1; i++)
    {
        if (arr1[i] > arr1[i + 1])
        {
            int temp = arr1[i + 1];
            arr1[i + 1] = arr1[i];
            arr1[i] = temp;
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (arr1[i] != arr2[i])
        {
            count = count + 1;
        }
    }
    if (count == 0)
    {
        cout << endl
             << "Sorted";
    }
    else
    {
        cout << endl
             << "Not Sorted";
    }

    // int len;
    // int sorted = 1;
    // cin >> len;
    // int arr[50];
    // for(int i = 0;i < len; i++){
    //     cin>>arr[i];
    // }
    // for(int i = 0; i< len-1; i++){
    //     if(arr[i] > arr[i+1]){
    //         sorted = 0;
    //         break;
    //     }
    // }
    // cout<<endl;
    // if(sorted == 0){
    //     cout << "Not Sorted";
    // }else{
    //     cout<<"Sorted";
    // }
    return 0;
}