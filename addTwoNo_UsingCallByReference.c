// In this program we will learn how to print addition of two numbers using concept of call by Reference in
// This type we will pass actual value of variable to fucntion and thus it is called call Reference
#include<stdio.h>
int add(int*,int*);
int main(){
    int a,b;
    printf("Entered two numbers \n");
    scanf("%d %d",&a,&b);
    
    printf("The addition of two numbers are :%d",add(&a,&b));
    return 0;
}
int add(int*x,int*y){
         int result=0;
         result=(*x) + (*y);
         return result;
}

