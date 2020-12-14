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
    char title[99];
    bool run = true;
    int bookInd = 0;
    int input, inp, i;
    while(run){
        mainMenu();
        scanf("%d", &input);
        if(input == 1){
            addABook(&bookL[bookInd]);
            bookL[bookInd].borrowed = 0;
            bookInd++;
        }
        else if(input == 2){
            bool broke = false;
            printf("1. search by title \n");
            printf("2. search by writer \n");
            printf("3. search by company \n");
            scanf("%d", &input); 
            if(input == 1){
                scanf("%s", &title); 
                fflush(stdin);
                for(i = 0; i < bookInd+1; i++){
                    if(compare(bookL[i].title, title) == 0){
                        broke = true;
                        break;
                    }
                }
                if(broke == true){
                    printf("the book is on %d th position \n", i);
                }else{
                    printf("the book is not found \n");
                }
                broke = false; 
            }else if(input == 2){
                scanf("%s", &title); 
                fflush(stdin);
                for(i = 0; i < bookInd+1; i++){
                    if(compare(bookL[i].author, title) == 0){
                        broke = true;
                        break;
                    }
                    i++;
                }
                if(broke == true){
                    printf("the book is on %d th position \n", i);
                }else{
                    printf("the book is not found");
                }
                broke = false;
            }else if(input == 3){
                scanf("%s", &title); 
                fflush(stdin);
                for(i = 0; i < bookInd+1; i++){
                    if(compare(bookL[i].PC, title) == 0){
                        broke = true;
                        break;
                    }
                    i++;
                }
                if(broke == true){
                    printf("the book is on %d th position \n", i);
                }else{
                    printf("the book is not found \n");
                }
                broke = false;
            }
        }
        else if(input == 3){
            printf("Which index would you like to borrow? \n");
            scanf("%d", &inp);
            if(inp < bookInd){
                if(bookL[inp].borrowed == false){
                    bookL[inp].borrowed = true;
                    printf("book, %s, successfully borrowed \n", bookL[inp].title);
                }else{
                    printf("book already borrowed. \n");
                }
            }else{
                printf("no such book \n");
            }
        }
        else if(input == 4){
            printf("Which index would you like to return?(state the book's original index) \n");
            scanf("%d", &inp);
            if(bookL[inp].borrowed == true){
                bookL[inp].borrowed == false;
                printf("book, %s, successfully returned \n", bookL[inp].title);
            }else{
                printf("book already in the place. \n");
            }
        }
        else if(input == 5){
            run = false;
        }
    }
}