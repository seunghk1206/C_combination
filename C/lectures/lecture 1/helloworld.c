#include <stdio.h>

int main(){
   float a = 3.141592f;
   double b = 3.141592;
   printf("a : %.2f \n", a);
   printf("b : %5f \n", b);
   printf("b : %6.100f \n", b);
   return 0;
}

double multiplication(double a, double b){
   return a * b;
}



/*
void name(){
   return 'whatever';
}
*/
/*gcc -o directory file*/
//char, double, int, void(any type, but complexizes the coding)
/*
not function but method
2's complement
char = 1byte -> 한개의 문자를 저장함 8비트 연산 안에 들어갈수있는건 문자 한개뿐
short int = 2bytes
int = 4 bytes
long = 4 bytes
bool = 1 byte
float = 4 bytes 소수점 7자리까지
double = 8 bytes 소수점 15자리까지 정확한 값계산
long double = 8 bytes 소수점 15자리까지 정확한 값계산
long long = 16 bytes 매우김
signed & unsigned 
*/