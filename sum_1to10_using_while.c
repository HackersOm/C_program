// In this program we will learn how to calculate sum of 1 to 10 numbers using while loop
#include<stdio.h>
int main(){
    int sum =0;
    int i =0;
    
    while(i<=10){
        sum+=i;
        i++;
    }
    printf("Sum of 1 to 10 numbers is:%d\n",sum);
    return 0;
}