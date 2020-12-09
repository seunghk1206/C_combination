#include <stdio.h>

struct Human{
    int age;
    int height;
    int weight;
}; // ; 붙이기!

int main(){
    struct Human me;
    me.age = 0;
    me.height = 0;
    me.weight = 0;

    printf("Information about me \n");
    printf("Age : %d \n", me.age);
    printf("Height : %d \n", me.height);
    printf("Weight : %d \n", me.weight);
}