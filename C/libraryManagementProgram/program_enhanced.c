#include <stdio.h>
#include <stdbool.h>

struct books{
    char title[99];
    char author[99];
    char PC[99];
    bool borrowed;
};

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

void addABook(struct books *bookLInd){
    printf("What is the title? \n");
    scanf("%s", &(bookLInd->title));
    fflush(stdin);
    printf("Who is the author? \n");
    scanf("%s", &(bookLInd->author));
    fflush(stdin);
    printf("What is the published company? \n");
    scanf("%s", &(bookLInd->PC));
    fflush(stdin);
    bookLInd->borrowed = false;
}

void searchABook(struct books *bookL[], int bookLlen){
    int input, i;
    char searchInput[99];
    bool breakBool = false;
    printf("How will you search the book by? \n");
    printf("1. Search by title \n");
    printf("2. Search by author \n");
    printf("3. Search by published company \n");
    scanf("%d", &input);
    if(input == 1){
        scanf("%s", searchInput);
        fflush(stdin);
        for(i = 0; i < bookLlen; i++){
            if(compare(&bookL[i]->title, &searchInput) == 1){
                printf("The book you are finding is in %dth position \n", i);
                breakBool = true;
                break;
            }
        }
        if(breakBool == false){
            printf("The book you are finding is not found");
        }
    }else if(input == 2){
        scanf("%s", searchInput);
        fflush(stdin);
        for(i = 0; i < bookLlen; i++){
            if(compare(&bookL[i]->author, &searchInput) == 1){
                printf("The book you are finding is in %dth position \n", i);
                breakBool = true;
                break;
            }
        }
        if(breakBool == false){
            printf("The book you are finding is not found");
        }
    }else if(input == 3){
        scanf("%s", searchInput);
        fflush(stdin);
        for(i = 0; i < bookLlen; i++){
            if(compare(&bookL[i]->PC, &searchInput) == 1){
                printf("The book you are finding is in %dth position \n", i);
                breakBool = true;
                break;
            }
        }
        if(breakBool == false){
            printf("The book you are finding is not found");
        }
    }
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
    struct books bookL[999];
    bool run = true;
    int bookInd = 0;
    int input;
    while(run){
        mainMenu();
        scanf("%s", &input);
        if(input == 1){
            addABook(&bookL[bookInd]);
            bookInd++;
        }else if(input == 2){
            searchABook(&bookL, bookInd+1);
        }
    }
}