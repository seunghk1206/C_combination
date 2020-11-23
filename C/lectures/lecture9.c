#include <stdio.h>

int add_number(int *parr);

int main(){
    int arr[3];
    int i;

    for(i = 0; i < 3; i++){
        scanf("%d", &arr[i]);
    }
    add_number(arr);

    printf("Each element : %d, %d, %d \n", arr[0], arr[1], arr[2]);

}

int add_number(int *parr){
    int i;
    for(i = 0; i<3; i++){
        parr[i]++;
    }
    return 0;
}
/*
int swap(int *a, int *b); // prototype 함수가 밑에 있어도 쓸수 있도록 한다.
int main(){
    return 0;
}
int swap(int *a, int *b){
    int temp = *a;

    *a = *b;
    *b = temp;

    return 0;
}
*/

/*
int factorize(int N){
    int i, num;
    if(N == 0){
        printf("1 \n");
    }
    else if(N == 1){
        printf("1 \n");
    }
    else{
        for(i = 2; i <= N; i++){
            if(N%i == 0){
                num = i;
                break;
            }
        }
        printf("%d * ", num);
        return factorize(N/num);
    }
}

int prime(int N){
    int i, num;
    for(i = 2; i <= N; i++){
        if(N%i == 0){
            num = i;
            break;
        }
    }
    if(N == num){
        printf("True");
    }
    else{
        printf("False");
    }
    return 1;
}

int main(){
    int N;
    scanf("%d", &N);
    factorize(N);
    prime(N);
}
*/
/*
int swap(int *a, int *b){
    int temp = *a;

    *a = *b;
    *b = temp;

    return 0;
}

int main(){
    int i, j;
    i = 3;
    j = 5;
    printf("Before Swap Function i : %d, j : %d \n", i, j);

    swap(&i, &j);

    printf("After Swap Function i : %d, j : %d \n", i, j);
}
*/
/*
double eulersNum(){
    return 2.71828182845904;
}

int change_val(int i){
    int *a;
    a = &i;
    *a = 3;
    printf("%p \n");
    return 0;
}

int main(){
    double a = eulersNum();
    printf("%f \n", a);

    int i = 0;
    printf("%p \n", &i);
    printf("value of i before calling the function : %d \n", i);
    change_val(i);
    printf("value of i after calling the function : %d \n", i);

    return 0;
}
*/

/*
int main(){
    int a=1;
    int b=2;
    int c=3;
    int *arr[3];
    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;
    printf("a : %d, arr[0] : %d, b : %d, arr[1] : %d, c : %d, arr[2] : %d \n", a, *arr[0], b, *arr[1], c, *arr[2]);
}
*/
/*
int main(){
    int arr[2][3];
    int brr[10][3];
    int crr[2][5];

    int(*parr)[3];

    parr = arr;
    parr = brr;
    parr = crr;
}
*/
/*
int main(){
    int arr[2][3] = {{1,2,3}, {4,5,6}};
    int (*parr)[3];
    
    parr = arr;

    printf("parr[1][2] : %d, arr[1][2] : %d \n", parr[1][2], arr[1][2]);
    //printf("arr : %p, arr + 1 : %p \n", arr, arr+1);

}
*/