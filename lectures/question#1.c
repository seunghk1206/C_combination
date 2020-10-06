#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

long long solution(long long n) {
    int b;
    b = sqrt(n);
    if (pow(b, 2) == n){
        return pow(b+1, 2);
    }
    return -1;
}