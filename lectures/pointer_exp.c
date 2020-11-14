#include <stdio.h>
#include <string.h>

int main(){
    char *p = "hello";
    printf("%s \n", p);
}
/*
int main(){
    char a;
    char *p;
    p = &a;
    *p = "hello";//does not work!
    printf("%c, %c \n", a, *p);
}
*/