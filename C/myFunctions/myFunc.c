#include <stdio.h>
#include <string.h>

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

long long max(int len, long long arr[]){
    int i;
    long long maxNum = arr[0]; // can use -(__DBL_MAX__) -1
    for(i = 0; i < len; i++){
        if(arr[i] > maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}

long long min(int len, long long arr[]){
    int i;
    long long minNum = arr[0]; // can use -(__DBL_MAX__) -1
    for(i = 0; i < len; i++){
        if(arr[i] < minNum){
            minNum = arr[i];
        }
    }
    return minNum;
}

long long *sorted(int len, long long *arr, long long *sortedArr){
    int i, j;
    long long max = -(__LONG_LONG_MAX__) - 1;
    for(j = 0; j < len; j++){
        for(i=0; i<len; i++){
            if (max<arr[i]){
                max = arr[i];
            }
        }
        for(i=0; i<len; i++){
            if (max==arr[i]){
                arr[i] = -(__LONG_LONG_MAX__) - 1;
                break;
            }
        }
        sortedArr[j] = max;
        max = -(__LONG_LONG_MAX__) - 1;
    }
    return sortedArr;
}

int main(){
    long long arr[10];
    long long sortedArr[10];
    int i;
    for(i = 0; i < 10; i++){
        scanf("%Ld", &arr[i]);
    }
    printf("max : %Ld \n", max(10, arr));
    printf("min : %Ld \n", min(10, arr));
    long long *parr = sorted(10, arr, sortedArr);
    for(i = 0; i< 10; i ++){
        printf("arr[%d] : %Ld \n", i, parr[i]);
    }
}

// max 함수 받기