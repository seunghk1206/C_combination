#include <stdio.h>
int main(){
    char ch;
    
    short sh;
    int i;
    long lo;

    float fl;
    double du;

    printf("type a char variable: \n");
    scanf("%c", &ch);

    printf("type a short variable: \n");
    scanf("%hd", &sh);

    printf("type an int variable: \n");
    scanf("%d", &i);

    printf("type a long variable: \n");
    scanf("%ld", &lo);

    printf("type a float variable: \n");
    scanf("%f", &fl);

    printf("type a double variable: \n");
    scanf("%lf", &du); //항상 lf for float

    printf("char : %c, short : %d, int : %d", ch, sh, i);
    printf("long : %ld, float : %f, double : %f \n", lo, fl, du);
    return 0;
}
/*
int main(){
    double celcius;

    printf("This is a program that alters celcius into farenheit");
    printf("Type in the Celsius: ");
    scanf("%lf", &celcius);

    printf("C: %f is F: %f. \n", celcius, 9*celcius/5+32);
    return 0;
}
*/