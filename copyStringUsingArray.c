// In this program we will learn how to copy one string in another string using array concept
#include<stdio.h>
int main(){
    int i=0;
    char str1[15],str2[15];
    printf("Enter a string \n");
    scanf("%s",str1);
   
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("Copied String in second array\n");
    printf("%s",str2);

    return 0;
}