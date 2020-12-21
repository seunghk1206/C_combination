#include <string.h>

char compare(char *str1, char *str2);

int main(){
    char str1[20];
    char str2[20];

    scanf("%s", &str1);
    scanf("%s", &str2);
    
    if(compare(str1, str2)){
        printf("%s, and %s are same", str1, str2);
    }
    else{
        printf("%s and %s are different", str1, str2);
    }
}