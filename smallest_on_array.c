// In this program we will learn how to find smallest number in array
#include<stdio.h>
int main(){
    int arr[5],i;
    int small;
    for(i=0;i<5;i++){
        printf("Enter %d element of array\n",i);
        scanf("%d",&arr[i]);

    }
    small = arr[0];
    for(i=1;i<=5;i++){
        if(small>arr[i]){
            small=arr[i];

        }
    }
    printf("Smallest number in entered array is :%d",small);

    return 0;
}