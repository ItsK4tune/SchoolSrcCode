#include <stdio.h>

int main(){
    int a[7] = {13, -335, 235, 47, 67, 943, 1222}; //Khởi tạo mảng a với 7 phần tử
    printf("address of first five elements in memory.\n");
    for (int i = 0; i < 5; i++) printf("\ta[%d] ",i);
    printf("\n");

    //******************
    //Nguyễn Đại Dương 20224966
    for (int i = 0; i < 5; i++)
        printf("\t%p", &a[i]);  //Đưa ra lần lượt địa chỉ của a[i] với i chạy từ 0 đến 4
    //******************

    return 0;
}