#include <stdio.h>

int main(){
    int len;
    scanf("%d", &len);
    //int score[] = {1,2,3,4,5,6};//이것도 가능!
    long long arr[len], sortedArr[len], tempL[len];
    long long max=-2147483647;
    int i, j;
    int count = 0;
    for(i=0;i<len;i++){
        printf("what number? ");
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
    for(i = 0; i < len; i++){
        if(sortedArr[i] == sortedArr[i+1]){
            tempL[count] == sortedArr[i];
            count += 1;
        }
    }
    for(i = 0; i < len; i++){
        for(j=0; j<len; j++){
            if(tempL[j] == sortedArr[i]){
                continue;
            }
            else{
                if(j+1 == len){
                    printf("%d\n", sortedArr[j]);
                }
            }
        }
    }
}
/*
int main(){
    int score[3][2];
    char subject[2] = {'K', 'E'};
    int i,j;
    
    for(i = 0; i<3; i++){
        for(j = 0; j< 2; j++){
            printf("%dth student's %c SCORE: ", i+1, subject[j]);
            scanf("%d", &score[i][j]);
        }
    }
    for (i = 0; i< 3; i++){
        printf("%dth student's Korean Score: %d, Math score %d \n", i+1, score[i][0], score[i][1]);
    }
}
*/
/*
int main(){
    int arr_two[2][2][2] = {1,2,3,4,5,6,7,8};//2차원 배열
    printf("arr_two 2x2x2 val: %d \n", arr_two[1][1][1]);
    printf("arr_two 1x2 val: %d \n", arr_two[0][0][0]);
}
*/