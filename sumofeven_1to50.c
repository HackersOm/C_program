// In this program we will study how to print sum of even number form 1 to 50 using for loop

#include<stdio.h>
int main(){
    int i;
    int j=0;
    int sum =0;
    for(i=0;i<50;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    printf("The sum of even numbers form 1 to 50 is:%d\n",sum);
    return 0;

}