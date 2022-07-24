// In this we learn how to add two number using user define funciton 
#include<stdio.h>
int add(int, int);
int main(){
    int a,b;

    printf("Enter two number below\n");
    scanf("%d %d",&a,&b);
    printf("Entered numbers sum is:%d",add(a,b));
  
    return 0;
}
int add(int x,int y){
    int c;
    c = x + y;
    return c;
}