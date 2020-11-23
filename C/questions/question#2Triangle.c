#include <stdio.h>
#include <stdlib.h>
int main(){
    /*
    down heavy
    int N, i, j;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        for(j = 0; j < abs(((i+1)-N)); j++){
            printf(" ");
        }
        for(j = 0; j < 2*i + 1; j++){
            printf("*");
        }
        printf("\n");
    }
    */
    int N, i, j;
    scanf("%d", &N);
    for(i = 0; i < N; i++){
        for(j = 0; j < i; j++){
            printf(" ");
        }
        for(j = 0; j < 2*(abs(i-N)-1)+1; j++){
            printf("*");
        }
        printf("\n");
    }
}