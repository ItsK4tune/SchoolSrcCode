#include <stdio.h>

int *a;
int n, tmp;

int main(){
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //#Allocate memory
    //****************
    //Nguyễn Đại Dương 20224966
    a = new int[n]; //Cấp phát vùng nhớ cho mảng a
    if (a==NULL)    return 0;   //Trả về giá trị 0 khi a rỗng
    //****************

    for (int i = 0; i < n; i++)
        scanf("%d", a+i);   

    printf("The input array is: \n");
    for (int i = 0; i < n; i++)
        printf("%d", *(a+i));
    printf("\n");

    //#Sort array
    //****************
    //Nguyễn Đại Dương 20224966
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) //Sử dụng bubble sort
            if (*(a+i) > *(a+j)){   
                tmp = *(a+i);   
                *(a+i) = *(a+j);
                *(a+j) = tmp;
            }
    //****************

    printf("The sorted array is: \n");
    for(int i = 0; i < n; i++)
        printf("%d", *(a+i));
    printf("\n");

    delete [] a;
    return 0;
}   