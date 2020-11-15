#include <stdio.h>

int main(){
    char a;
    char *p;
    p = &a;
    *p = "hello";//does not work!
    printf("%c, %c \n", a, *p);
}