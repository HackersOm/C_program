// In this program we will learn how to find smallest number which was entered by user 
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Two numbers below\n");
    scanf("%d %d",&a,&b);
    if(a<b){
         printf("Entered first number is smallest \n");

    }
    else{
        printf("Enterd second number is smallest\n");

    }
    return 0;

}