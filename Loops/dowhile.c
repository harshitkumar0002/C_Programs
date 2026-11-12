#include <stdio.h>
int main(){
    printf("\nDo While Loop: \n");
    int i=0;

    do {
        printf("Hello, This is Do-while Loop Executing Here...%d\n",i);
        i++;
    }
    while (i<=20);
}