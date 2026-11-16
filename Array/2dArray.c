#include <stdio.h>
int main(){
    int arr[3][3], i, j;
    printf("\nEnter the Values in Matrix(Row-wise Enterance): ");
    for (i= 0; i <3; i++){
        for (j= 0; j <3; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nPrinting the Values of the Matrix(Array): \n\n");
    for (i= 0; i< 3; i++){
        for (j= 0; j< 3; j++){
            printf("\t%d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}