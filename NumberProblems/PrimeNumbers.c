#include <stdio.h>
int main(){
    int num, i, j, count;
    printf("\nHello this is Prime Number Program\n\n");
    
    printf("Enter the Number: ");
    scanf("%d", &num);

    for (i= 2; i< num; i++){
        num %i;
        if (num %i == 0){
            count++;
        }
    }
    if (count== 0){
        printf("Prime Number\n");
    }
    else{
        printf("Not a Prime Number\n");
    }
    return 0;
}