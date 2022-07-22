// In this program we will learn how to add two distances and save in another structure 
#include<stdio.h>
struct distance{
    int km;
    int m;
};
int main(){
    struct distance s1,s2,s3;
    printf("Enter first distance in km \n");
    scanf("%d",&s1.km);
    printf("Enter first distance in m\n");
    scanf("%d",&s1.m);
    printf("Enter second distance in km \n");
    scanf("%d",&s2.km);
    printf("Enter second distance in m\n");
    scanf("%d",&s2.m);
    s3.km= s1.km + s2.km;
    s3.m = s1.m + s2.m;
    printf("Entered distance addition are as follow\n");
    printf("total distnace in km is :%d\n",s3.km);
    printf("total distnace in m is :%d\n",s3.m);
    return 0;
}