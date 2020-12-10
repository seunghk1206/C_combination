#include <stdio.h>

struct test{
    int age;
    int gender;
    char name[20];
};

void copy_str(char *src, char *dest){
    while(*dest){
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int set_human(struct test *a, int age, int gender, char nameinp[]){
    a->age = age;
    a->gender = gender;
    copy_str((a->name), nameinp);
}

int main(){
    struct test human;
    set_human(&human, 10, 1, "ME");
    printf("AGE : %d // Gender : %d // Name : %s", human.age, human.gender, human.name);
}
/*
struct test{
    int i;
    char str[20];
};

void copy_str(char *src, char *dest){
    while(*dest){
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

int main(){
    struct test a, b;
    b.i = 3;
    copy_str(b.str, "hello world");
    a = b;
    printf("a.str : %s \n", a.str);
    printf("a.i : %d \n", a.i);
}
*/