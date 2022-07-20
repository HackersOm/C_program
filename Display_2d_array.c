// In this program we will learn how to accept and display 2d array 
#include<stdio.h>
int main(){
    int arr[3][3];
    int i,j;
    printf("Enter matrix array \n ");
    for(i=0;i<3;i++){
        printf("\n");
        
        for(j=0;j<3;j++){
            
            scanf("%d",&arr[i][j]);
        }
        
    }
    printf("Entered matrix array are as bellow\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",arr[i][j]);

        }
        printf("\n");

    }

    return 0;
}