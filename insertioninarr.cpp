#include<iostream>
using namespace std;
int main(){
    int len;
    cout << "Enter the number of elements  : ";
    cin >> len;
    cout << endl;
    int arr[50];
    for (int i = 0; i < len; i++){
        cout << "Enter element " << i+1 << " : ";
        cin >> arr[i];
        cout << endl;
    }
    int pos, elm;
    cout << "Enter the index where you want to add an element : ";
    cin >> pos;
    cout << endl;
    cout << "Enter the element you want to add : ";
    cin >> elm;
    cout << endl;
    for (int i = len-1; i >= pos - 1; i--){
        arr[i+1] = arr[i];
    }
    arr[pos-1] = elm;
    for (int i = 0; i <= len; i++){
        cout << arr[i] << " ";
    }
    return 0;

}