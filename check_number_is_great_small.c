// In this program we will learn how to check whether the given numbers is greater then 100 or equal to 100 or less then 100
#include<stdio.h>

int main(){
    int x;
    int i=100;
    printf("Enter a number \n");
    scanf("%d",&x);
    if(x<i){
        printf("Entered number is less then 100\n");

    }
    else if(x>i){
        printf("Entered numbre is greater then 100\n");

    }
    else{
         printf("Entered number is equal to 100\n");

    }
    return 0;
    

}