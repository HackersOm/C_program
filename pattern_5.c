// In this program we will learn how to print the following output using for loops 

// A 
// BB
// CCC
// DDDD
// EEEEE
#include<stdio.h>
int main(){
    int i,j;
    char a='A';

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%c",a);
           
        }
         a++;
        printf("\n");
    }
    return 0;
}