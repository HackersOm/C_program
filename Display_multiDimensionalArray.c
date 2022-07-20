// In this program we will learn how to accept and display multi Dimensional array
#include<stdio.h>
int main(){
    int arr[3][3][3];
    int i,j,k;
    printf("Enter values of three Dimensional array below \n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("\n");
            for(k=0;k<3;k++){
                 scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("Etnered values of three Dimensional array are as follow\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%d\t",arr[i][j][k]);
            }
        printf("\n");
        }
    printf("\n");
    }

    return 0;
}