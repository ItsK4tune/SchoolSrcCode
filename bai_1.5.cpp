#include <stdio.h>

double *maximum(double *a, int size){
    double *max;
    max = a;
    if (a==NULL)    return NULL;

    //***************
    //Nguyễn Đại Dương 20224966
    for (double *p = a+1; p < a+size; p++)
        if (*p > *max)  //So sánh từng phần tử của mảng a với biến max
            max = p;    //Nếu phần tử đang xét lớn hơn, biến max bằng phần tử đang xét
    //***************

    return max;
}

int main(){

}