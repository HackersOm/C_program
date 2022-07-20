// In this program we will study how to calculate sum,average of inputed array
#include<stdio.h>
int main(){
    int i,arr[5];
    int sum=0;
    int avg=0;
    for(i=0;i<5;i++){
        printf("Enter %d element of array\n",i);
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    avg=sum/i;
    printf("Entered array sum is :%d\n",sum);
    printf("Entered array average is :%d\n",avg);
    
    return 0;
}