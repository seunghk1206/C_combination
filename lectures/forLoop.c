#include <stdio.h>
//유저로부터 몇개의 과목을 입력 받을지 scanf를 사용하여 받고,
//각 과목의 점수를 입력 받고,
//전체 과목의 평균을 나타내는 코드를 작성하시오
int main(){
    int i = 1, sum = 0;
    do{
        sum += i;
        i ++;
    } while(i < 100);
    printf("sum : %d \n", sum);
}
/*
int main(){
    int i = 1, sum = 0;

    while(i <= 100){
        sum += i;
        i ++;
    }

    printf("sum of 1 to 100 : %d \n", sum)
}
*/
/*
int main(){
    int i, j;

    for(i = 1; i<10; i++){
        for(j = 1; j< 10; j++){
            printf("%d x %d = %d \n", i, j, i*j);
        }
    }
    return 0;
}
*/
/*
int main(){
    int i;

    for(i = 0; i<10; i++){
        if (i%5 == 0) continue;
        printf("%d", i);
    }
}
*/
/*
int main(){
    int userAnswer;
    printf("Guess a number that computer is thinking now! : \n");
    for(;;){
        scanf("%d", &userAnswer);
        if(userAnswer == 3){
            printf("correct!\n");
            break;
        }else{
            printf("wrong!\n");
        }
    }
    return 0;
}
*/
/*
int main(){
    int i, lenOSub, score;
    double average;
    scanf("%d", &lenOSub);
    for(i = 0; i<lenOSub; i++){
        scanf("%d", &score);
        average += score;
    }
    average /= lenOSub;
    printf("%f", average);
}
*/
/*
int main(){
    int i, sum = 0;
    for(i = 0; i < 20; i++){sum += i;}
    printf("Sum of 1 to 19: %d", sum);

    return 0;
}
*/
/*
int main(){
    int i;
    for(i = 0; i < 20; i++){
        printf("number: %d \n", i);
    }
    return 0
}
*/
/*
i = 0
printf(i)
printf(i++) prints 0
printf(++i) prints 1
*/