#include<stdio.h>
#include<math.h>
int main(){

    //For int variable:
    int a,b;
    printf("Enter int  Number a = ");
    scanf("%d",&a);

    printf("Enter  int Number b = ");
    scanf("%d",&b);

    printf("The sum of a+b is  = %d\n", a+b);

    //For float variable:
    float c,d;
    printf("Enter float Number c = ");
    scanf("%f",&c);

    printf("Enter float Number d = ");
    scanf("%f",&d);

    printf("The sum of c+d is = %f\n", c+d);

    //For character:
    char ch;
    printf("Enter any character = ");
    scanf("\n%c",&ch);
    printf("char = %c\n",ch);
    
    //function  abs(_) give always positive number:
    int subtraction = abs(b-a);
    printf("subtraction of a & b is = %d\n", subtraction);

    //size of int ,char,float:
    printf("size of int = %lu\n",sizeof(int));
    printf("size of float = %lu\n",sizeof(float));
    printf("size of char = %lu\n",sizeof(char));
    printf("size of short = %lu\n",sizeof(short));
    printf("size of double = %lu\n",sizeof(double));
    
    return 0;
};