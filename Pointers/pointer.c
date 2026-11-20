// Pointer is a Special Variable in C used to Store the Address of the Variables....

#include <stdio.h>
void main(){
    int num, *p ; 
    // *p is a pointer 
    p= &num;
    num= 5;
    printf("%d is Num Value\n", num);
    printf("%d is Pointer Value\n", *p);
    printf("%d is a Pointer Address\n", p);