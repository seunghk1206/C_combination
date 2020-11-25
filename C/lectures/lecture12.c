#include <stdio.h>

int main(){
    char *pstr = "goodbye";
    printf("why so serious?");
    scanf("%c", pstr[0]);
}

int main(){
    char str[] = "sentence";
    char *pstr = "sentence";

    str[1] = 'a';
    //pstr[1] = 'a';
    printf("str : %s \n", str);
    //printf("pstr : %s \n", pstr);
}