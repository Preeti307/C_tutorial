#include<stdio.h>
int main(){
    int a = 0; // a = 6;
    int b = 5;

   /* Logical Operators */
    // for && operatop :-> Both operands  must be non-zero
    printf("a && b = %d\n",a&&b);

    //for || operator :-> At least one operand must be non-zero
    printf("a || b = %d\n",a||b);

    //for ! operator :-> This operator reverse the logical state 
    printf("!a = %d\n",!a);
    printf("!b = %d\n",!b);

    /* Bitwise Operators */
    // you can find &,| operator value by solving binary number 
    //for & operator :
    printf("a & b = %d\n",a&b);

    //for | operator :
    printf("a | b = %d\n",a|b);

    /* Assignment Operator */
    // '=' operator :-> This operator only assigns the value
    float f = 5;

    // '+=' operator :
     f += 2.2;
    printf("The value of f is = %f\n",f);

    // '-=' operator :
    f -= 3;
    printf("The value of f is = %f\n",f);

    // '*=' operator :
    f *= 6;
    printf("The value of f is = %f\n",f);

    // '/=' operator :
    f /= 2;
    printf("The value of f is = %f\n",f);

    return 0;
};