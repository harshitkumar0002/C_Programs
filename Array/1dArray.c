// 1-Dimensional Array in C

#include <stdio.h>
int main(){
    int a[5];
    printf("\nArray Program in C [1-Dimensional Array]\n");
    
    printf("Enter the Value in Array: ");
    for (int i= 0; i <=4; i++){
        scanf("%d", &a[i]);
    }

    printf("\n");
    printf("Array values are: \n");
    for (int i= 0; i <=4; i++){
        printf("\t%d", a[i]);
    }

    return 0;
}