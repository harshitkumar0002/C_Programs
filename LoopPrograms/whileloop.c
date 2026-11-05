#include <stdio.h>
/*
int main(){
    datatype variable_name;
    while (condition) {
        // statements
    }
    return 0;
}
*/

int main(){
    int num;
    
    printf("Using While Loop Program in C :: Printing Countings from 0 to 100 using while loop\n");
    
    num = 0;
    while (num <= 100) {
        printf("%d\n", num);
        num++;
    }
    return 0;
}