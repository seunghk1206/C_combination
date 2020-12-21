#include <stdio.h>
#include "human.h"

void main(){
    struct Human Kim = Create_Human("Kim", 16, MALE);
    Print_Human(&Kim);
}