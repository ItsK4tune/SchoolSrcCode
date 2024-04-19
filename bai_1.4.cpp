#include <stdio.h>

int counteven(int* arr, int size){
    int count = 0;

    //**************
    //Nguyễn Đại Dương 20224966
    for (int i = 0; i < size; i++)
        if (!(*(arr+i)%2))  //Nếu phần tử đang xét chẵn thì biến count cộng 1
            count++;
    //**************

    return count;
}

int main(){
    int a[10];
    for (int i = 0; i < 10; i++)
        scanf("%d", a+i);
    int b = counteven(a, 10);
    printf("%d", b);
}