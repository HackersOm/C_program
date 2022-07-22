// In this program we will learn the Concept of structure within structure 
#include<stdio.h>
struct student{
    int roll_no;
    char name[15];
    char class[10];
    struct Bday{
        int date;
        int month;
        int year;
    }s1;
};
int main(){
    struct student std;
    printf("Enter Student information \n");
    printf("Enter student name \n");
    scanf("%s",std.name);
    printf("Enter student class\n");
    scanf("%s",std.class);
    printf("Enter student roll number \n");
    scanf("%d",&std.roll_no);
    printf("Enter student Birth date in date/Month/year format\n");
    scanf("%d %d %d",&std.s1.date,&std.s1.month,&std.s1.year);
    printf("Entered Student information are as follow\n");
    printf("Student name is :%s\n",std.name);
    printf("Student Class is :%s\n",std.class);
    printf("Student roll number is :%d\n",std.roll_no);
    printf("Student Birth date is :%d/%d/%d\n",std.s1.date,std.s1.month,std.s1.year);
    return 0;
}