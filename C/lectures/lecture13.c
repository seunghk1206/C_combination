#include <stdio.h>
#include <stdbool.h>

int compare(char* LoT, char* Title, int* total){
    int ind2 = 0;
    while(LoT){
        if(LoT == Title){
            LoT++;
            Title++;
            ind2++;
        }
        else{
            ind2 = 0;
            break;
        }
    }
    if(ind2 != 0){
        *total += 1;
        return 1;
    }
    return 0;
}


void borrowABook(char* LoBB, char LoB[]){
    int a;
    printf("The book number? ");
    scanf("%d", &a);
    *LoBB = LoB[a];
}

void returnABook(){}

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
    bool run = true;
    int a;
    int index = 0;
    char ListOfTitles[999][99];
    char ListOfWriters[999][99];
    char ListOfCompanies[999][99];
    char borrowedBooks[999][99];
    while(run){
        mainMenu();
        scanf("%d", &a);
        if(a == 1){
            addABook(ListOfTitles[index], ListOfWriters[index], ListOfCompanies[index]);
            index += 1;      
        }else if(a == 2){
            int input;
            printf("1. search by title \n");
            printf("2. search by writer \n");
            printf("3. search by company \n");
            scanf("%d", &input); 
            if(input == 1){
                int LoTMap[999];
                char Title[99];
                int ind;
                int ind2;
                int totNum = 0;
                int closestInd;
                printf("which book title? ");
                scanf("%s", &Title);
                for(ind = 0; ind < 1000; ind++){
                    LoTMap[ind] = compare(ListOfTitles[ind], Title, &totNum);
                }
                if(totNum == 0){
                    printf("No books are found \n");
                }else{
                    for(ind2 = 0; ind2 < 100; ind2++){
                        if(LoTMap[ind2] == 1){
                            closestInd = ind2;
                            break;
                        }
                    }
                    printf("%d book stocks are available \n", totNum);
                    printf("The nearest position of the book is: %d \n", closestInd);
                }
            }else if(input == 2){
                int LoWMap[999];
                char Title[99];
                int ind = 0;
                int ind2 = 0;
                int totNum = 0;
                int closestInd;
                printf("who is the writer? ");
                scanf("%s", &Title);
                for(ind = 0; ind < 1000; ind++){
                    LoWMap[ind] = compare(ListOfWriters[ind], Title, &totNum);
                }
                if(totNum == 0){
                    printf("No books are found \n");
                }else{
                    for(ind2 = 0; ind2 < 100; ind2++){
                        if(LoWMap[ind2] == 1){
                            closestInd = ind2;
                            break;
                        }
                    }
                    printf("%d book stocks are available \n", totNum);
                    printf("The nearest position of the book is: %d \n", closestInd);
                }
            }else if(input == 3){
                int LoCMap[999];
                char Title[99];
                int ind = 0;
                int ind2 = 0;
                int totNum = 0;
                int closestInd;
                printf("which company published the book? ");
                scanf("%s", &Title);
                for(ind = 0; ind < 1000; ind++){
                    LoCMap[ind] = compare(ListOfCompanies[ind], Title, &totNum);
                    ind++;
                }
                if(totNum == 0){
                    printf("No books are found \n");
                }else{
                    for(ind2 = 0; ind2 < 100; ind2++){
                        if(LoCMap[ind2] == 1){
                            closestInd = ind2;
                            break;
                        }
                    }
                    printf("%d book stocks are available \n", totNum);
                    printf("The nearest position of the book is: %d \n", closestInd);
                }
            }
        }else if(a == 3){
            fflush(stdin);
        }else if(a == 4){
            fflush(stdin);
        }else if(a == 5){
            run = false;
        }
    }
    return 0;
}

/*
도서 관리 프로그램
메뉴를 선택하시오
1. 책을 새로 추가하기
2. 책을 검사하기
3. 책을 빌리기
4. 책을 반납하기
5. 프로그램 종료
당신의 선택은 :

도서관리 프로그램을 만들기:
1. 책을 새로 추가하는 기능 (책의 총 개수는 100권이라 하자. 이 때, 각 책의 정보는 
    제목, 저자의 이름, 출판사로 한다)
2. 책의 제목을 검색하면 그책의 정보가 나와야한다
3. 위와 마찬가지로 저자, 출판사 검색기능이 있어야한다
4. 책을 빌리는 기능
5. 책을 반납하는 기능
*/