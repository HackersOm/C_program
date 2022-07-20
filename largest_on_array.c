// In this program we will learn how to find largest number in Entered array
#include<stdio.h>
int main(){
    int arr[5],i;
    int large;
    for(i=0;i<5;i++){ 
        printf("Enter %d element of array\n",i);
        scanf("%d",arr[i]);
    }
    large = arr[0];
    for(i=1;i<=5;i++){
        if(large<arr[i]){
            large=arr[i];
        }
    }
    
    printf("Largest number in entered array is:%d",large);

    return 0;
}