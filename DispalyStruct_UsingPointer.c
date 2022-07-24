//  In this program we will learn how to display structure using pointer Concept
#include<stdio.h>
struct students{
    int roll_no;
    int marks;
    char name[15];

};
int main(){
    typedef struct students std;
    std s1,*ptr;
    ptr = &s1;
    printf("Enter information of student \n");
    printf("Enter student name\n");
    scanf("%s",ptr->name);
    printf("Enter student roll_no\n");
    scanf("%d",&ptr->roll_no);
    printf("Enter student marks\n");
    scanf("%d",&ptr->marks);
    printf("Entered student information are as follow \n");
    printf("Entered student name is %s\n",ptr->name);
    printf("Entered student roll number is %d\n",ptr->roll_no);
    printf("Entered student marks is %d\n",ptr->marks);
    
    return 0;
}