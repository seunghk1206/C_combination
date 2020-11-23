#include <stdio.h>

int add1_element(int (*arr)[2], int row){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j<2; j++){
            arr[i][j]++;
        }
    }
}

int main(){
    int arr[3][2];
    int i, j;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    add1_element(arr, 3);
}