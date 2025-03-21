#include<stdio.h>
/* typecasting convert one data type into another data type */

// int main(){
//     float a = 54/5;
//     float b = (float)54/5;
//     printf("the value of a is %f\n",a);
//     printf("the value of b is %f",b);

//     return 0;
// };

#include <stdio.h>

int main() {
    float a = 5.75;
    int b;

    b = (int) a; // Explicit typecasting from float to int

    printf("Value of b: %d\n", b); // Output: 5

    return 0;
}
