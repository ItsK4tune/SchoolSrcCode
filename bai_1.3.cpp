#include <stdio.h>

int main(){
    int x, y, z; //Khai báo 3 biến x, y, z
    int *ptr;
    scanf("%d %d %d", &x, &y, &z);
    printf("Here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z);

    //****************
    //Nguyễn Đại Dương 20224966
    ptr = &x; //Gán địa chỉ của biến x cho con trỏ ptr
    *ptr += 100; //Cộng 100 vào biến x
    ptr = &y; //Gán địa chỉ của biến y cho con trỏ ptr
    *ptr += 100; //Cộng 100 vào biến y
    ptr = &z; //Gán địa chỉ của biến z cho con trỏ ptr
    *ptr += 100; //Cộng 100 vào biến z
    //****************

    printf("Once again, here are the values of x, y, and z:\n");
    printf("%d %d %d\n", x, y, z);
    return 0;
}