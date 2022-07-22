// In this program we will learn how to use typedef keyword to give simple name for structure 
#include<stdio.h>
typedef struct employee{
     char name[15];
     int enroll ;
     int salary;
}emp;

int main(){
    // typedef struct employee emp;<-------------- This is second method to declear typedef keyword
    emp e1[3];
    int i;
    printf("Enter detail of employees below \n");
    for(i=0;i<3;i++){
        printf("Enter %d employee name \n",i);
        scanf("%s",e1[i].name);
        printf("Enter %d employee enrollment number \n",i);
        scanf("%d",&e1[i].enroll);
        printf("Enter %d employee salary \n",i);
        scanf("%d",&e1[i].salary);
        

    }
    printf("Entered employees detail are as follow\n");
    for(i=0;i<3;i++){
        printf("Enter %d employee name is:%s \n",i,e1[i].name);
        printf("Enter %d employee name is:%d \n",i,e1[i].enroll);
        printf("Enter %d employee name is:%d \n",i,e1[i].salary);
        printf("\n");
    }
    return 0;
}