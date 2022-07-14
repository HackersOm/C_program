#include<stdio.h>
// In this program we will study how find greatest number between two numbers using conditional operator
int main(){
     int a,b;
     printf("Enter First number\n");
     scanf("%d",&a);
     printf("Enter Second number\n");
     scanf("%d",&b);
     (a<b)?printf("second number is greatest number\n"):printf("First numbers is greatest number\n");
     return 0;

     }