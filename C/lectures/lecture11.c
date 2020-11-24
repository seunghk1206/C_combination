#include <stdio.h>

int main(){
    int num;
    char c;

    printf("give me a number: ");
    scanf("%d", &num);

    printf("give me a character : ");
    scanf("%c", &c);
}
/*
int main(){
    char words[30];

    printf("please give me a string less than 30. ");
    scanf("%s", words);

    printf("String : %s \n", words);
}
*/
/*
int lenstr(char str[]){
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        ++i;
        count += 1;
    }
    return count;
}

int main(){
    char word[] = {"hello world"};
    printf("%d \n", lenstr(word));
}
*/
/*
int main(){
    char word[30] = {"long sentence"};
    char *str = word;
    printf("%s \n", str);
}
*/
/*
int main(){
    char sentence_1[4] = {'p', 's', 'i', '\0'};
    char sentence_2[4] = {'p', 's', 'i', 0};
    char sentence_3[4] = {"psi"};//len +1

    printf("sentence_1 : %s \n", sentence_1);
    printf("sentence_2 : %s \n", sentence_2);
    printf("sentence_3 : %s \n", sentence_3);
}
*/

/*
int main(){
    char null_1 = '\0';
    char null_2 = 0;

    char not_null = '0';
    printf("ASCII value of NULL : %d, %d, %d \n", null_1, null_2);
    printf("ASCII value of 0 : %d", not_null);
    return 0;
}
*/