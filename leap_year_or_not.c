// In this program we will learn how to find entered year is leap year is not
#include<stdio.h>
int main(){
    int year;
    printf("Enter year\n");
    scanf("%d",&year);
    if(year%4==0){
        printf("Entered year is leap year\n");

    }
    else{
        printf("Entered year is not leap year \n");
    }
    return 0;

}