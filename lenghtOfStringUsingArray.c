// In this program we will learn how to find length of string using array 
#include<stdio.h>
int main(){
    int i=0;
    char name[15];
    printf("Enter a string \n");
    scanf("%s",name);
    while(name[i]!='\0'){
        i++;
    }
    printf("Entered string lenght is :%d",i);

    return 0;
}