#include<stdio.h>
// In this program we will calculate sum of three numbers and average of three numbers
int main(){
    int a,b,c;
    int total=0;
    int avg =0;
    printf("Enter Three number below\n");
    scanf("%d %d %d",&a,&b,&c);
    total=a+b+c;
    avg=total/3;
    printf("Entered number total is :%d\nAnd average is %d",total,avg);

     return 0;
}