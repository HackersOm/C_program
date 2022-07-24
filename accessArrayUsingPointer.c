// In this program we will learn how access Array Element using pointer concept this is also called array with pointer concept
#include<stdio.h>
int main(){
    int arr[4];
    int *ptr;
    printf("Enter values of array elements\n");
    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);

    }
    ptr=&arr[0];
    printf("Entered array elements are as follow\n");
    for(int i=0;i<4;i++){
        printf("%d element of array is %d\n",i,*ptr);
        ptr++;
    }
    return 0;
}