// In this program we will learn how to accept array elements form user and print on console array element
#include<stdio.h>
int main(){
    int arr[5];
    int i;
    for(i=0;i<=5;i++){
        printf("Enter %d element of array to store\n",i);
        scanf("%d",arr[i]);

    }
   
    printf("Entered array elements are as follows\n");
    for(i=0;i<5;i++){
        printf("%d \n",arr[i]);

    }
    

    return 0;
}