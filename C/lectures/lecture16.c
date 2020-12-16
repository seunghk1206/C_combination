#include <stdio.h>

int* function(){
    static int a = 2;//정적 변수 -> 지역을 빠져나가도 파괴되지 않는
    return &a;
}
int main(){
    int* pa = function();
    printf("%d \n", *pa);
}
/*
int count = 0;

int MagicBolt(){
    count++;
    printf("Skilles used : %d \n", count);
}

int main(){
    for(int i = 0; i < 10; i++){
        MagicBolt();
    }
}
*/
/*
int global = 0;

int function(){
    global++;
}

int main(){
    global = 10;
    function();
    printf("%d \n", global);
    return 0;
}
*/
/*
void function(){int a = 2;}

void main(){
    int a = 3;
    {
        int a = 4;
        printf("a = %d \n", a);
    }
    printf("a = %d \n", a);
}
*/
/*
enum{RED, BLUE, WHITE, BLACK};
int main(){
    int palette = RED;
    switch (palette){
        case RED:
            printf("palette : RED \n");
            break;
        case BLUE:
            printf("palette : BLUE \n");
            break;
        case WHITE:
            printf("palette : WHITE \n");
            break;
        case BLACK:
            printf("palette : BLACK \n");
            break;
    }
}
*/
/*
struct HUMAN{
    int age;
    int height;
    int weight;
    int gender;
};

int Print_Status(struct HUMAN human){
    if(human.gender == 0){
        printf("MALE \n");
    }else{
        printf("FEMALE \n");
    }
    printf("AGE : %d / Height : %d / Weight : %d \n", human.age, human.height, human.weight);
    if(human.gender == 0 && human.height >= 180){
        printf("He is winner \n");
    }else if(human.gender == 0 && human.height < 180){//&&는 and 연산자, || 는 or
        printf("He is a loser!!!! \n");
    }
    printf("-------------------------------\n");
}

void main(){
    struct HUMAN YH = {30, 182, 75, 0};
    struct HUMAN SH = {30, 183, 85, 0};
    Print_Status(YH);
    Print_Status(SH);
}
*/
/*
struct obj{
    char name[20];
    int x,y;
}; Ball;

int main(){
    Ball.x = 3;
    Ball.y = 4;
}
*/
/*
struct AA{
    int i;
};

struct AA func(int j){
    struct AA A;
    A.i = j;
    return A;
}

void main(){
    struct AA a;
    a = func(19);
    printf("a.i : %d \n", a.i);
}*/
/*
struct employee {
    int age;
    int salary;
};
struct company{
    struct employee data;
    char name[10];
};


void main(){
    struct company SH;
    SH.data.age = 31;
    SH.data.salary = 30;
    printf("SH's age : %d \n", SH.data.age);
    printf("SH's Salary : %d \n", SH.data.salary);
}
*/