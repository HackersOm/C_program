// In this program we will study how to print sum of digits of entered number using for loop
#include<stdio.h>
int main(){
    int a;
    int Q=0;
    int rem=0;
    int sum =0;
    printf("Enter a number below \n");
    scanf("%d",&a);
    // while(a){
    //     Q=a%10;
    //     rem=a/10;
    //     sum+=Q;
    //     a=rem;
    // }
    for(int i=0;i<a;){
        Q=a%10;
        rem=a/10;
        sum+=Q;
        a=rem;
    }
    printf("sum of digits is:%d",sum);

    return 0;
}
