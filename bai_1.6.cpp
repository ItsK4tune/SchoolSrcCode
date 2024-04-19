#include <stdio.h>

void reversearray(int a[], int size){
    int l = 0, r = size - 1, tmp;

    //****************
    //Nguyễn Đại Dương 20224966
    while(l < r){
        tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        l++;
        r--;
    }
    //****************

}

void ptr_reversearray(int *arr, int size){
    int l = 0, r = size - 1, tmp;

    //****************
    //Nguyễn Đại Dương 20224966
    while(l < r){
        tmp = *(arr+l);
        *(arr+l) = *(arr+r);
        *(arr+r) = tmp;
        l++;
        r--;
    }
    //****************

}

int main(){

}