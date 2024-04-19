#include <stdio.h>

int main(){
   int x, y, z; //Khai báo biến x, y, z
   int *ptr; //Khai báo con trỏ ptr
   printf("Enter three integers: ");
   scanf("%d %d %d", &x, &y, &z); //Nhập vào 3 số nguyên x, y, z
   printf("\nThe three integers are:\n");
   ptr = &x; //Gán địa chỉ của biến x cho con trỏ ptr;
   printf("x = %d\n", *ptr);

   //****************
   //Nguyễn Đại Dương 20224966
   ptr = &y; //Gán địa chỉ của biến x cho con trỏ ptr;
   printf("y = %d\n", *ptr);
   ptr = &z; //Gán địa chỉ của biến y cho con trỏ ptr;
   printf("z = %d\n", *ptr);
   //****************

   return 0;
}