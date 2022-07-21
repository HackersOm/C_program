// In this program we will learn how to convert a string into Lower to Upper using array concept same logic for Upper to Lower
#include<stdio.h>
int main(){
    int i=0;
    char str1[15];
    printf("Enter your string Lower case\n");
    scanf("%s",str1);
    while (str1[i]!='\0')
    {
        str1[i]-=32;
        i++;
    }
    printf("Entered string in Upper case\n");
    printf("%s\n",str1);
    return 0;

}