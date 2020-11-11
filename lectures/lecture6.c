#include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int *parr;
    int i;
    parr = &arr[0];
    for(i = 0; i < 10; i++){
        printf("arr[%d]'s address: %p", i, &arr[i]);
        printf("(parr + %d)'s value %p:", i, (parr + i));
        if(&arr[i] == (parr + i)){
            printf("True \n");
        }
        else{
            printf("False \n");
        }
    }
}
/*
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    for (i = 0; i < 10; i++){
        printf("arr[%d]'s address : %p \n", i, &arr[i]);
    }
}
*/
/*
int main(){
    double a;
    double *pa;
    pa = &a;
    printf("value of pa: %p \n", pa);
    printf("value of pa + 1: %p \n", pa + 1);
}//포인터간의 뺄셈은 가능하지만 덧셈은 안된다
*/
/*
int main(){
    int a;
    int b;
    int *p;
    p = &a;
    *p = 2;
    p = &b;
    *p = 4;
    printf("a : %d \n", a);
    printf("b : %d \n", b);
}
*/
/*
int main(){s
    int a;
    a = 2;
    printf("%p \n", &a);
}
*/
//포인터는 메모리상에 위치한 특정한 데이터의 주소값을 보관하는 변수
//(포인터에 주소값이 저장되는 형태) *(포인터의 이름); -> int *a;
// &연산자 (주소값을 불러온다)
// & 주소값을 계산할 데이터
//&a
//%p (포인터)65FE18 6684184