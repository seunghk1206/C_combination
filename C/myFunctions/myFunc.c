#include <stdio.h>
#include <string.h>

int factorize(int N){
    int i, num;
    if(N == 1){
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

int lenstr(char str[]){
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        ++i;
        count += 1;
    }
    return count;
}

void copy_str(char *dest, char *src){
    while(*dest){
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

void addStr(char *str1, char *str2, char *sumStr){
    while(*str1){
        *sumStr = *str1;
        str1++;
        sumStr++;
    }
    while(*str2){
        *sumStr = *str2;
        str2++;
        sumStr++;
    }
    *sumStr = '\0';
}

int main(){
    /*
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
    */
    char str1[6] = "hello";
    char str2[6] = "bye";
    char sumStr[11];
    addStr(str1, str2, sumStr);
    printf("%s \n", sumStr);
    copy_str(str1, str2);
    printf("%s \n", str1);
    printf("%s \n", str2);
}

// max 함수 받기