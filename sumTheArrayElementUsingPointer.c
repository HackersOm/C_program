// This is program we will learn how to sum the elements of array using pointer concept 
#include<stdio.h>
int main(){
    int arr[4];
    int sum=0;
    int *ptr;
    printf("Enter array element below \n");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
       
    }
    ptr=&arr[0];
    for(int i=0;i<4;i++){
         sum+=(*ptr);
         ptr++;
    }
    printf("Entered array elements sum is :%d",sum);
    
    return 0;
    
}