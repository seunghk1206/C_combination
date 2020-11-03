#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int a, int b) {
    int SumODays, i;
    SumODays = 0;
    int dateArr[12] = {31,29,31,30,31,30,31,31,30,31,30,31};
    char* dayArr[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    char* answer;
    // 리턴할 값은 메모리를 동적 할당해주세요.
    for(i = 0; i < a-1;i++){
        SumODays += dateArr[i];
    }
    SumODays += b;
    SumODays -= 1;
    answer = (char*)malloc(10);
    printf("%d\n", SumODays);
    strcpy(answer, dayArr[SumODays%7]);
    return answer;
}
char* main(){
    printf("%s\n", solution(5,24));
    return 0;
}


/*
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    solution(arr, 10);
    return 0;
}
// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
    double answer = 0;
    printf('%d', arr_len);
    return answer;
}
*/