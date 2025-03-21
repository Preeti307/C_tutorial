#include<stdio.h>
#include<math.h>
int main(){
    /* Operators */

    // '+' operator:
    int a,b;
    printf("Enter number a = ");
    scanf("%d",&a);

    printf("Enter number b = ");
    scanf("%d",&b);
    
    printf("a + b = %d\n", a+b);

    
    // '-' operator:
    printf("a - b = %d\n", a-b);

    // '*' operator:
    printf("a * b = %d\n", a*b);

    // '/' operator:
    printf("a / b = %d\n", a/b);

    // '%' operator:
    printf("a %% b = %d\n", a%b);

    return 0;
};