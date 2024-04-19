#include<bits/stdc++.h>
using namespace std;

int n;
int arr[100000];

// Hàm nhập vào mảng phần tử
void InputArray(int *arr, int n){
    for(int i = 0; i < n; i++)
        cin >> *(arr + i);
}

// Hàm xuất ra các dãy con của mảng
void SubArray(int *arr, int n){
    for(int i = 0; i < n; i++)
        for(int j = i; j < n; j++){
            for(int k = i; k <= j; k++)
                cout << *(arr + k) << " ";
            cout << endl;
        }
}

int main(){
    //*******************
    //Nguyễn Đại Dương - 20224966
    //*******************

    cout << "So phan tu trong mang: ";
    cin >> n;

    cout << "Nhap vao cac phan tu trong mang: ";
    InputArray(arr, n);

    SubArray(arr, n);
    
    return 0;
}