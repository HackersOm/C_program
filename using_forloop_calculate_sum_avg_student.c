// In this program we will learn how to find sum average numbers of student using for loop
#include<stdio.h>
int main(){
    int i;
    int sum =0;
    int avg =0;
    int no;
    for(i=0;i<4;i++){
        printf("Enter numbers of %d student\n",i);
        scanf("%d",&no);
        sum+=no;
    }
    avg=sum/i;
    printf("Entered students sum is :%d\n",sum);
    printf("Enterd student numbers average is:%d\n",avg);
    return 0;
}