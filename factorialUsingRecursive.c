// In this program we will learn how to find factorial of entered number using recursive function k
#include<stdio.h>
int fact(int);

int main(){
    int num;
    printf("Enter a number \n");
    scanf("%d",&num);
    printf("Entered number factorical is:%d",fact(num));
    return 0;
}
int fact(int num){
    int a=0;
    if(num==1){
        return 1;
    }
    else{
         
         a=num*fact(num-1);
         return a;
    }
   
}