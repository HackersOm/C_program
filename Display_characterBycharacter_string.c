// In this program we will learn how to accept a string form user and display character by character 
#include<stdio.h>
int main(){
    char name[10];
    int i=0;
    printf("Enter your string \n");
    scanf("%s",name);
    // printf("Entered string character are as follow\n");
    // while(name[i]!='\0'){
    //     printf("%c\n",name[i]); <--------- using while loop
    //     i++;
    // }
    printf("Entered string character are as follow\n");
    for(i=0;name[i]!='\0';i++){
        printf("%c\n",name[i]);
    }
    
    return 0;
}