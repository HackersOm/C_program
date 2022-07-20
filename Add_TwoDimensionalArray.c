// In this program we will learn how to add to two 2d array and save in result array 
#include<stdio.h>
int main(){
    int arr1[3][3],arr2[3][3],result[3][3];
    int i,j;
    printf("Enter first 2d array below\n");
    for(i=0;i<3;i++){
        
        for(j=0;j<3;j++){
            scanf("%d",&arr1[i][j]);
        }
    printf("\n");
    }
    printf("Enter second 2d array below\n");
    for(i=0;i<3;i++){
        
        for(j=0;j<3;j++){
            scanf("%d",&arr2[i][j]);
            result[i][j]=arr1[i][j]+arr2[i][j];
            

        }
    printf("\n");
    }
    printf("Entered arrays addition are as follows\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",result[i][j]);

        }
        printf("\n");
    }

    return 0;

}