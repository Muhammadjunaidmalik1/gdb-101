#include <stdio.h>

int junaid = 100;

void bar(){
    printf("Hello from bar()\n");
}

int foo(int x, int y){
    x = x * 2;
    y = y + 3;
    junaid ++;
    bar();

    return x + y;
}

int main(){
    int a = 10;
    int b = 20;
    int i;

    char *ptr;

    char arr[10];

    ptr = arr;

    for(i = 0 ; i < 10 ;i++){
        arr[i] = i*10;
    }

    for(i = 0 ; i < 10 ;i++){
        printf("arr[%d] = %d\n" , i , arr[i]);
    }


    junaid ++;
    junaid = 200;

    foo(a,b);

    return 0;
}