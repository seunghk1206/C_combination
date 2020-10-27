#include <stdio.h>

int main(){
    int len;
    scanf("%d", &len);
    long long arr[len];
    long long sortedArr[len];
    int i, j;
    long long max=-2147483647;
    for(i = 0; i<len; i++){
        printf("%dth student's grade: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(j = 0; j < len; j++){
        for(i=0; i<len; i++){
            if (max<arr[i]){
                max = arr[i];
            }
        }
        for(i=0; i<len; i++){
            if (max==arr[i]){
                arr[i] = -2147483647;
                break;
            }
        }
        sortedArr[j] = max;
        max = -2147483647;
    }
    for(i = 0; i<len; i++){
        printf("%d\n", sortedArr[i]);
    }
}
/*
int main(){
    int arr[10];
    int i, ave = 0;
    for(i = 0; i<10; i++){
        printf("%dth students grade: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i< 10; i++){
        ave = ave+arr[i];
    }
    printf("Average of total grade: %d\n", ave / 10);
    ave/=10;
    for(i = 0; i<10; i++){
        printf("Students %d: ", i+1);
        if(arr[i] >= ave){
            printf("pass \n");
        }else{
            printf("fail \n");
        }
    }
}
*/
/*
int main(){
    int arr[5];
    int i, ave = 0;
    for(i = 0; i<5; i++){
        printf("%dth students grade: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i< 5; i++){
        ave = ave+arr[i];
    }
    printf("Average of total grade: %d", ave / 5);
}
*/
/*
int main(){
    int arr[10] = {2,10,30,21,34,23,53,21,9,1};
    int i;
    for(i = 0; i<10; i++){
        printf("%dth element is: %d\n", i+1, arr[i]);
    }
    return 0;
}
*/