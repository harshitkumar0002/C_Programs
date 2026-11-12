#include <stdio.h>

// For Loop Program in C :: Printing table of a number using for loop 
/*
int main(){
    datatype variable_name;
    for (initialization; condition; increment/decrement) {
        // statements
    }
    return 0;
}
*/
#include <stdio.h>
int main() {
    int num;
    
    printf("Using For Loop Program in C :: Printing table of a number using for loop\n");

    printf("Enter a Number: ");
    scanf("%d", &num);
    
    for (int i= 1; i<= 10; i++ ){
        printf("%d x %d = %d\n", num, i, num*i);
    }
    
    return 0;
}