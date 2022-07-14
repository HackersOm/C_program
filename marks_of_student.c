// In this program we will learn how to accept and display marks ,average  of three subject and display it if average marks is >= 40then give remarks as pass below remarks not pass
#include<stdio.h>
int main (){
    int sub1,sub2,sub3;
    int total=0;
    int avg =0;
    printf("Enter your subject marks below \n");
    scanf("%d %d %d",&sub1,&sub2,&sub3);
    total = sub1+sub2+sub3;
    avg =total/3;
    printf("Total marks of three subject is %d\n",total);
    printf("Average of student is %d\n",avg);
    if(avg>=40){
         printf("Your are pass\n");
    }
    else{
        printf("Sorry your are not pass\n");
    }

    return 0;
}
