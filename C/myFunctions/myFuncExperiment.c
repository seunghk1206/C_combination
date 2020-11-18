#include <stdio.h>

long long max(int len, long long arr[]){
    int i;
    long long maxNum = -(__LONG_LONG_MAX__) - 1;
    for(i = 0; i < len; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int main(){
    long long arr[] = {1,2,3,4,5,6,1,2,3,4};
    printf("%Ld \n", max(10, arr));
}