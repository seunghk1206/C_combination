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
    for(i = 0; i < a;i++){
        SumODays += dateArr[i];
    }
    SumODays += b;
    SumODays -= 1;
    answer = (char*)malloc(10);
    strcpy(answer, dayArr[SumODays%7]);
    return answer;
}