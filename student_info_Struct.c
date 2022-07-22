// In this program we  will learn how to store students information in structure and display it in console 
#include<stdio.h>
struct student{
        int marks;
        char name[15];
        char class[10];
        int roll_no;

};
int main(){
     struct student s1;
     printf("\t\t\tEnter information of student below \n");
     printf("Enter student marks\n");
     scanf("%d",&s1.marks);
     printf("Enter student name \n");
     scanf("%s",s1.name);
     printf("Enter student class \n");
     scanf("%s",&s1.class);
     printf("Enter student roll number \n");
     scanf("%d",&s1.roll_no);


     printf("\t\t\tEntered student information are as follow\n");
     printf("name is :%s\n",s1.name);
     printf("class is :%s\n",s1.class);
     printf("marks is:%d\n",s1.marks);
     printf("roll number:%d\n",s1.roll_no);
     return 0;
}