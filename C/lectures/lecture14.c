#include <stdio.h>


/*
struct test{
    int i;
    char c;
};
int main(){
    struct test st, st2;

    st.i = 1;
    st.c = 'c';

    st2 = st;
    printf("st2.i : %d \n", st2.i);
    printf("st2.c : %c \n", st2.c);
}
*/
/*
struct test{
    int c;
};
int add_one(int *a){
    *a += 1;
}
int main(){
    struct test t;
    struct test *pt = &t;

    pt -> c = 0;
    add_one(&t.c);
    printf("t.c : %d \n", t.c);
    add_one(&pt -> c);
    printf("t.c : %d \n", t.c);
}
*/
/*
struct test{
    int c;
    int *pointer;
};
int main(){
    struct test t;
    struct test *pt = &t;
    int i = 0;
    t.pointer = &i;

    *t.pointer = 3;
    printf("i : %d \n", i);
    
    *pt->pointer = 4;
    printf("i : %d \n", i);
}
*/
/*
struct test{
    int a, b;
};

int main(){
    struct test st;
    struct test *ptr;

    ptr = &st;
    
    (*ptr).a = 1;// this is the same as ptr->a = 1;
    (*ptr).b = 2;
    printf("a: %d \n", st.a);
    printf("b: %d \n", st.b);
}
*/
/*
char copy_str(char *dest, const char *src){
    while(*src){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}
struct Books{
    char name[30];
    char auth[30];
    char publ[30];
    int borrowed;
};
int main(){
    struct Books book[999];
    int i;
    for(i=0; i<3; i++){
        printf("Please type in book %d information", i);
        scanf("%s%s%s", book[i].name, book[i].auth, book[i].publ);
        book[i].borrowed = 0;
    }
    for(i=0; i<3; i++){
        printf("-------------------------\n");
        printf("Book %s's info \n", book[i].name);
        printf("Author %s \n", book[i].auth);
        printf("publication %s \n", book[i].publ);
        if(book[i].borrowed == 0){
            printf("Book still in library \n");
        }else{
            printf("Book already borrowed \n");
        }
    }
}
*/