#include <stdio.h>
#include <stdbool.h>

int compare(char *str1, char *str2){
    int i = 0;
    while(*str1){
        if(*str1 != *str2){
            return 1;
        }
        else{
            str1++;
            str2++;
            i++;
        }
    }
    str1 -= i;
    str2 -= i;
    while(*str2){
        if(*str2 != *str1){
            return 1;
        }
        else{
            str1++;
            str2++;
        }
    }
    return 0;
}

void copy_str(char *dest, char *src){
    while(*dest){
        *src = *dest;
        src++;
        dest++;
    }
    *src = '\0';
}

void addABook(char* LoT, char* LoW, char* LoC){
    printf("The title? ");
    scanf("%s", LoT);
    fflush(stdin);
    printf("The writer? ");
    scanf("%s", LoW);
    fflush(stdin);
    printf("The company? ");
    scanf("%s", LoC);
    fflush(stdin);
}

void mainMenu(){
    printf("Library Management Program \n");
    printf("Pick a menu \n");
    printf("  1. add a new book \n");
    printf("  2. search a book \n");
    printf("  3. borrow a book \n");
    printf("  4. return a book \n");
    printf("  5. exit program \n");
    printf("Your choice? ");
}

int main(){
    bool run = true, broke = false;
    int index = 0, a, length = 0;
    int borrowingInd = 0, inputBorrow;
    int returningInd = 0, inputReturn;
    char ListOfTitles[999][99], ListOfWriters[999][99], ListOfCompanies[999][99];
    bool verifyL[999];
    int borrowedBooks[999];
    while(run){
        mainMenu();
        scanf("%d", &a);
        if(a == 1){
            addABook(ListOfTitles[length], ListOfWriters[length], ListOfCompanies[length]);
            length += 1;
        }else if(a == 2){
            char title[99];
            int input;
            printf("1. search by title \n");
            printf("2. search by writer \n");
            printf("3. search by company \n");
            scanf("%d", &input); 
            if(input == 1){
                scanf("%s", &title); 
                fflush(stdin);
                for(index = 0; index < length; index++){
                    if(compare(ListOfTitles[index], title) == 0){
                        broke = true;
                        break;
                    }
                }
                if(broke == true){
                    printf("the book is on %d th position \n", index);
                }else{
                    printf("the book is not found \n");
                broke = false;
                }
            }else if(input == 2){
                scanf("%s", &title); 
                fflush(stdin);
                for(index = 0; index < length; index++){
                    if(compare(ListOfWriters[index], title) == 0){
                        broke = true;
                        break;
                    }
                    index++;
                }
                if(broke == true){
                    printf("the book is on %d th position \n", index);
                }else{
                    printf("the book is not found");
                broke = false;
                }
            }else if(input == 3){
                scanf("%s", &title); 
                fflush(stdin);
                for(index = 0; index < length; index++){
                    if(compare(ListOfCompanies[index], title) == 0){
                        broke = true;
                        break;
                    }
                    index++;
                }
                if(broke == true){
                    printf("the book is on %d th position \n", index);
                }else{
                    printf("the book is not found \n");
                }
                broke = false;
            }
        }else if(a == 3){
            scanf("%d", &inputBorrow);
            if(verifyL[inputBorrow] != true){
                borrowedBooks[borrowingInd] = inputBorrow;
                verifyL[inputBorrow] = true;
                borrowingInd++;
                printf("successfully borrowed! \n");
            }else{
                printf("sorry, your book is already taken \n");
            }
        }else if(a == 4){
            scanf("%d", &inputReturn);
            if(inputReturn < borrowingInd){
                verifyL[borrowedBooks[inputReturn]] = false;
                printf("borrowed book, %s , has successfully been returned \n", ListOfTitles[borrowedBooks[inputReturn]]);
            }else{
                printf("cannot find this book you borrowed \n");
            }
        }else if(a == 5){
            run = false;
        }
    }
    return 0;
}