#include<stdio.h>
// In this program we will learn perincerament,postincrement and perdecrement ,postdecrement.
// In perincrement the value  is first increment and then assign to variable. 
// In post increment the value is assign first and then increment .
// And same for perdecrement and post decrement
// the result shown below 
int main(){
    int a ;
    int b=0;
    // logic for perincrement and post increment 
    printf("Enter a number\n");
    scanf("%d",&a);
    b=a++;
    printf("value after postincrement:%d\n",b);
    printf("Enter same number as before for better understanding \n");
    scanf("%d",&a);
    b=++a;
    printf("value after perincrement:%d\n",b);
  

    // logic for perdecrement and post decrement 
     printf("Enter a number\n");
    scanf("%d",&a);
    b=a--;
    printf("value after postdecrement:%d\n",b);
    printf("Enter same number as before for better understanding \n");
    scanf("%d",&a);
    b=--a;
    printf("value after perdecrement:%d\n",b);

    return 0;

}
