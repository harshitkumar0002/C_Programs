// Even Numbers are the Numbers, which are Divisible by 2;
#include <stdio.h>
int main(){
    int num;
    printf("Even Number Program:: \n\n");
    printf("Enter a Num(To Check Even/Odd): ");
    scanf("%d", &num);

    if (num %2 == 0){
        printf("%d is an Even Number\n", num);
    }
    else{
        printf("%d is an Odd Number\n", num);
    }
    return 0;
}