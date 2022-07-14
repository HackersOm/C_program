// In this program we will learn how to perform addition,subtraction,multiplcation,division using switch case
#include<stdio.h>
int main(){
    float a,b;
    int c;
    float add =0;
    float sub =0;
    float mul =0;
    float div =0;
    printf("Enter 1 to 4 number for following operation \n");
    printf("1 for addtion\n");
    printf("2 for subtraction \n");
    printf("3 for multiplcation\n");
    printf("4 for division\n");
    scanf("%d",&c);
    printf("Enter two number for calculation\n");
    scanf("%f %f",&a,&b);
    switch(c){
        case 1:
                add=a+b;
                printf("Addition is :%f",add);
                break;
        case 2:
                sub =a-b;
                printf("Subtraction is :%f",sub);
                break;
        case 3:
                mul=a*b;
                printf("Mulitplaction is :%f",mul);
                break;
        case 4:
                div=a/b;
                printf("Division is :%f",div);
                break;
        default:
                printf("Wrong number");
                break;
    }            
     return 0;
}