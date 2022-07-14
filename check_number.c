// In this program we will learn how to find if inputed number is positive or negative or zero
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number \n");
    scanf("%d",&a);
    if(a>0){
        printf("Entered number is positive\n");

    }
    else if(a<0){
        printf("Entered number is negative \n");
    }
    else{
        printf("Entered number is zero\n");
    }
    return 0;

}