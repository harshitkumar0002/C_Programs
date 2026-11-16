// Basic Logic :: 
// We take a number from the User, let we run a loop and divide that num with every other num between 1-num. We will also take the other variable(here. "count") and let its value be Zero(0)... As the times the Num get Divided, the times the Value of the Variable we will Increment(Add) by 1. And Now, if the Count of division== 0 (Not divisible by Any other number),then it is Definitely a Prime Number //Otherwise it is not a Prime.

#include <stdio.h>
int main(){
    int num; //user input num
    int i; //loop var
    int j; //loop var
    int count; //count of Divisions(How much times, the num got divided)

    printf("\nHello this is Prime Number Program\n\n");
    
    printf("Enter the Number: ");
    scanf("%d", &num); // USer-Input

    for (i= 2; i< num; i++){ // Loop to include all the Nums between 1-num
        num %i; // checking the division of num with other numbers
        if (num %i == 0){ 
            count++; // if Remainder of division of num & other numbers = 1 // count will be Incremented by 1.
        }
    }
    if (count== 0){
        printf("Prime Number\n");
        // if num is not divisible by other digit, the count will be 0. Therefore, it is a Prime Number.
    }
    else{
        printf("Not a Prime Number\n");
        // Else the count is incremented(count > 0) and num is Divisible with numbers 1 or more times. So, it is not a Prime.
    }
    return 0;
}