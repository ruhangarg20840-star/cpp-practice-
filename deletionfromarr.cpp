#include<iostream>
using namespace std;
int main(){
    int len;
    cout << "Enter the number of elements : ";
    cin >> len;
    cout << endl;
    int arr[len];
    for (int i = 0; i < len; i++){
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
    }
    int del;
    cout << "Enter the positoin at which you want to del the array : ";
    cin >> del;
    cout << endl;
    for(int i = del-1; i < len; i++){
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < len-1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}