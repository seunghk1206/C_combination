#include <stdio.h>
int main(){
    int arr[3] = {1,2,3};
    int (*parr)[3] = &arr;//크기가 3인 배열을 가르키는 포인터
    printf("arr[1] : %p \n", arr);
    printf("parr[1] : %p \n", parr);
}
/*
int main(){
    int a;
    int *pa;
    int **ppa;

    pa = &a;
    ppa = &pa;

    a = 3;
    
    printf("%d, %d, %d \n", a, *pa, **ppa);
}
*/
/*
int main(){
    int arr[10] = {100,98,95,97,89,76,92,96,100,99};
    int *parr = arr;
    int sum = 0;

    while(parr - arr <= 9){
        sum += (*parr);
        parr++;
    }
    printf("my average is: %d \n", sum/10);
}
*/
/*
int main(){
    int *arr[3] = {1,2,3};
    int *parr;

    parr = arr;

    printf("arr[1] : %d \n", arr[1]);
    printf("parr[1] : %d \n", parr[1]);
}
*/
/*
int main(){
    int arr[5] = {1,2,3,4,5};
    printf("a[3] : %d \n", arr[3]);
    printf("*(arr+3) : %d \n", *(arr+3));
    printf("%d \n", len(arr));
}
*/
/*
int main(){
    int arr[] = {1,2,3,4,5,6};
    int *parr = arr;

    printf("Size of arr :  %d \n", sizeof(arr));
    printf("Size of parr : %d \n", sizeof(parr)); // 64 bit = 8 byt(8 bit is 1 byte)
}
*/
/*
int main(){
    int arr[] = {1,2,3};
    printf("arr's identity : %p \n", arr);
    printf("arr[0]'s address : %p \n", &arr[0]);
}
*/
/*
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *parr;

    parr = &arr[0];
    
    printf("arr[3] = %d, *(parr+3) = %d \n", arr[3], *(parr+3));
}
*/