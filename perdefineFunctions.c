// In this program we learn the perdefine fuctions in c language included in librarys
// we will see two most Important librarys in c language these are math.h and string.h
// and there functions
#include<stdio.h>
#include<math.h>
#include<string.h>
void math_example(void);
void string_example(void);
int main(){
    int no;
    printf("Press 1 for string functions\n");
    printf("Press 2 for math functions \n");
    scanf("%d",&no);
    switch(no){
        case 1:string_example();
               break;

        case 2:math_example();
               break;
    }
    
    return 0;
}
void string_example(){

    int a;
    printf("Enter 1 for strlen function\n");
    printf("Enter 2 for strcpy function\n");
    printf("Enter 3 for strcmp function\n");
    printf("Enter 4 for strcat function\n");
    scanf("%d",&a);
   
    switch (a){
        char str[16];
        char str1[16],str2[16];
        case 1:
             // first function of string library is strlen which calculate the length of string
                
                printf("Enter a string \n");
                scanf("%s",str);
                printf("Entered string length is %d",strlen(str));
                break;

        case 2: 
                // second function of string library is strcpy which copy one string to another
               
                printf("Enter a string to copy in differnt variable and print\n");
                scanf("%s",str1);
                strcpy( str2,str1);
                printf("copied string another variable is :%s",str2);
                break;
        case 3:
                // third fucntion of string library is strcmp this function campair two string
                printf("Enter two string to campair them\n");
                scanf("%s %s",str1,str2);

                if(strcmp(str2,str1)<0){
                    printf("Entered first string is greater than second \n");
                }
                else if(strcmp(str2,str1)>0){
                    printf("Entered second string is greater than first \n");
                }
                else {
                    printf("Both string are equal\n");
                }

                break;
        case 4:
            // fourth function of string library is strcat this function is used to comcatinate / cambine two string 
            // it append second string at the tail of first string 
            printf("Enter two string to cambine them\n");
            scanf("%s %s",str1,str2);
            printf("Entered contcatinated string will be :%s",strcat(str1,str2));
            break;

        default :
            printf("Wrong number\n");
            break;
    }

}
void math_example(){
    int no;
    float a,b,c;
    printf("Enter 1 for see sqrt fucntion of math library\n");
    printf("Enter 2 for see pow fucntion of math library\n");
    printf("Enter 3 for see log fucntion of math library\n");
    printf("Enter 4 for see abs fucntion of math library\n");
    scanf("%d",&no);
    switch (no){
        case 1:
                printf("Enter the value to find its square root\n");
                scanf("%f",&a);
                printf("Square root of Entered value is :%f",sqrt(a));
                break;
        case 2:
                printf("Enter the values to find its pow\n");
                scanf("%f %f",&a,&b);
                printf("Power of Entered values are:%f",pow(a,b));
                break;
        case 3:
                printf("Enter the value to find its log\n");
                scanf("%f",&a);
                printf("The log of Entered value is :%f",log(a));
                break;
        case 4:
                printf("Enter the value to find its sin value\n");
                scanf("%f",&a);
                printf("sin value of Entered value is :%f",sin(a));
                break;

    }
}
