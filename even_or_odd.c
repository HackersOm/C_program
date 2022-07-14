// In this program we will learn how to find entered number is even or odd
#include<stdio.h>
int main(){
    int a;
    printf("Enter a number below\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("Entered number is even\n");
        
    }
    else{
        printf("Entered number is odd\n");

    }

    return 0;
}