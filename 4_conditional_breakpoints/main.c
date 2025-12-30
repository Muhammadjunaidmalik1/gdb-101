#include <stdio.h>

int junaid = 100;

int foo(int x, int y){
    x = x * 2;
    y = y + 3;

    junaid ++;

    return x + y;
}

int main(){
    int a = 10;
    int b = 20;
    int i;

    for(i = 0 ; i < 10 ;i++){
        printf("i = %d | foo = %d\n", i , foo(a+i, b+i));
    }

    junaid ++;

    junaid = 200;
    return 0;
}