// In this program we will learn how to find largest number between three number using nested if else
#include<stdio.h>
int main()
{
    int no1, no2, no3;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &no1, &no2, &no3);
    if (no1 > no2)
    {
        if (no1 > no3)
        {
            printf("Entered First number is greatest\n");
        }
    }
    else if (no2 > no1)
    {
        if (no2 > no3)
        {
            printf("Entered Second number is greatest\n");
        }
    }
    else
    {
        printf("Entered Three number is greatest\n");
    }
    return 0;
}
