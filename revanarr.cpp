#include<iostream>
using namespace std;
int main(){
    int len;
    cout << "Enter th enumber of elements : ";
    cin >> len;
    cout << endl;
    int arr[len];
    for(int i = 0; i < len; i++){
        cout << "Enter elemnet ";
        cin >> arr[i];
        cout << endl;
    }
    for (int i = len-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    return 0;
}