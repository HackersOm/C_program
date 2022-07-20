// In this program we will study how to print spelling of numbers inputed form  user in between 11 to 15 by using switch case statements
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number between 11 to 15 below \n");
    scanf("%d",&a);
    switch(a){
        case 11:
              printf("Eleven\n");
              break;
        case 12:
              printf("Twelve\n");
              break;
        case 13:
              printf("Thirteen\n");
              break;
        case 14:
              printf("Fourteen\n");
              break;
        case 15:
              printf("Fifteen\n");
              break;
        default:
              printf("Worng Number\n");
              break;
    }
    return 0;
}