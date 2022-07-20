// In this program we will learn how add to array and store result in another array
#include<stdio.h>
int main(){
    int arr1[5],arr2[5],result[5];
    int i;
    printf("Enter first array below\n");
    for(i=0;i<5;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter second array below \n");
    for(i=0;i<5;i++){
        scanf("%d",&arr2[i]);
        result[i]=arr1[i]+arr2[i];
    }
    for(i=0;i<5;i++){
      printf("Entered two arrays addition is :%d\n",result[i]);

    }
    

    return 0;
}