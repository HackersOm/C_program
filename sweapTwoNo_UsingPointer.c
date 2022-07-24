// In this program we will learn how to exchange value of two numbers using pointer concept of call by reference
#include<stdio.h>
void sweap(int*,int*);
int main(){
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    printf("values before sweap is a=%d  and b=%d\n",a,b);
    sweap(&a,&b);
    printf("The values after sweap is a=%d and b=%d\n",a,b);
    return 0;
}
void sweap(int*x,int*y){
    int temp=0;
    temp = *x;
    *x =*y;
    *y = temp;

}