// In this program we will learn how to print following output using for loops
// *
// **
// ***
// ****
// *****
#include<stdio.h>

int main(){
    int i,j;
    for(i=0;i<5;i++){
        for(j=0;j<=i;j++){
            printf("*");

        }
     printf("\n");

    }
    return 0;
}