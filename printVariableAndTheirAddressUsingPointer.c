// In this program we will learn how to print variable and their addresses using pointer concept
#include<stdio.h>
int main(){
    int a,b;
    int *ptr1,*ptr2;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    ptr1=&a;
    ptr2=&b;
    printf("enter numbers value is :%d and its address in memory location is %x\n",*ptr1,ptr1);
    printf("enter numbers value is :%d and its address in memory location is %x\n",*ptr2,ptr2);

    return 0;
}