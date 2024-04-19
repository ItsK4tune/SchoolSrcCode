#include <stdio.h>

void allocate_mem(int *** mt, int m, int n){
    //#Allocate memory for the matrix
    //****************
    //Nguyễn Đại Dương 20224966
    *mt = new int *[m]; //Cấp phát vùng nhớ cho mảng các mảng mt
    for (int i = 0; i < m; i++)
        (*mt)[i] = new int [n]; //Cấp phát vùng nhớ cho từng mảng trong mảng mt
    //****************
}

void input(int **mt, int m, int n){
    //#Input elements of the matrix
    //****************
    //Nguyễn Đại Dương 20224966
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++){
            printf("mt[%d][%d] = ", i, j);
            scanf("%d", &mt[i][j]); //Nhập số nguyên vào từng biến của mảng 2 chiều mt
        }
    //****************
}

void output(int **mt, int m, int n){
    //#Print all elements of the matrix
    //****************
    //Nguyễn Đại Dương 20224966
    for (int i = 0; i < m ; i++){
        for (int j = 0; j < n; j++)
            printf("%d ", mt[i][j]);    
        printf("\n");
    }
    //****************
}

int process(int **mt, int m, int n){
    int tong = 0;

    //#Calculate the sum of all even elements in the matrix
    //****************
    //Nguyễn Đại Dương 20224966
    for (int i = 0; i < m ; i++)
        for (int j = 0; j < n; j++)
            tong += mt[i][j]%2 == 0 ? mt[i][j] : 0; //Biến tong cộng giá trị của mt[i][j] khi mt[i][j] chẵn và cộng 0 khi lẻ
    //****************

    return tong;
}

void free_mem(int **mt, int m, int n){
    //#Free memory
    //****************
    //Nguyễn Đại Dương 20224966
    for (int i = 0; i < m; i++)
        delete [] mt[i];    //Ngừng cấp phát vùng nhớ cho từng mảng trong mảng mt
    delete [] mt;   //Ngừng cấp phát vùng nhớ cho mảng mt
    //****************
}

int main(){
    int m, n, **mt; //Khai báo biến m, n và mảng 2 chiều mt
    printf("Enter m, n = ");
    scanf("%d%d", &m, &n);
    allocate_mem(&mt, m, n);
    input(mt, m, n);
    output(mt, m, n);
    printf("The sum of all even elements is %d", process(mt, m, n));
    free_mem(mt, m, n);
    return 0;
}