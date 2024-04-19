#include<bits/stdc++.h>
using namespace std;

int n;
int **maTran1, **maTran2;

int main(){
    //*******************
    //Nguyễn Đại Dương - 20224966
    //*******************
    
    cout << "Nhap kich thuoc ma tran vuong: ";
    cin >> n;

    // Cap phat bo nho cho mt1, mt2
    maTran1 = new int*[n];
    maTran2 = new int*[n];

    for (int i = 0; i < n; i++){
        maTran1[i] = new int[n];
        maTran2[i] = new int[n];
    }

    // Nhap gia tri cho mt1, mt2
    cout << "Nhap ma tran 1: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            cin >> maTran1[i][j];
        }

    cout << "Nhap ma tran 2: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++){
            cin >> maTran2[i][j];
        }

    // Tinh va in va tong cua 2 ma tran
    cout << "Ma tran tong: \n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int temp;
            temp = maTran1[i][j] + maTran2[i][j];
            cout << temp << " ";
        }
        cout << endl;
    }

    // Tinh va in ra tich cua 2 ma tran
    cout << "Ma tran tich: \n";
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            int temp = 0;
            for(int k = 0; k < n; k++){
                temp += maTran1[i][k] * maTran2[k][j];
            }
            cout << temp << " ";
        }
        cout << endl;
    }
}