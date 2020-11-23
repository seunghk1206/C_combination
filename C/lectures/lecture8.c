#include <stdio.h>
int main(){
    int a[2][3] = {{1,2,3}, {4,5,6}};
    /*
    printf("a : %p \n", a);
    printf("arr[0] : %p \n", a[0]);
    printf("arr[0][0] : %p \n", &a[0][0]);
    printf("arr[1] : %p \n", a[1]);
    printf("arr[1][0] : %p \n", &a[1][0]);
    */
    printf("Total len %d \n", sizeof(a));
    printf("Row len : %d \n", sizeof(a[0])/sizeof(a[0][0]));
    printf("column len : %d \n", sizeof(a) / sizeof(a[0]));
}