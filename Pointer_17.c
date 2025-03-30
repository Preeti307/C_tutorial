/*  pointer : variable which store the address of another variable */
//  & = return the address of variable 
//  * (dereference) = dereferencfe opreator goes to the given address and print the value 

#include<stdio.h>
int main(){
    int a = 15;
    float b = 22.2;
    char c = 'P';

    int *p = &a;
    float *q = &b;
    char *r = &c;

    printf("The value of a is %d\n",a);         // The value of a will be printed
    printf("The value of p is %d\n",*p);        // The value of p will be printed
    printf("The address of a is %p\n",&a);      // The address of a will be printed
    printf("The address of p is %p\n",&p);      // The address of p will be printed
    printf("The address of under p is %p\n\n",p); // The address inside the p will be printed (the address of p and a will be same because the address of a is stored inside p)

    printf("The value of b is %0.1f\n",b);         
    printf("The value of q is %0.1f\n",*q);        
    printf("The address of b is %p\n",&b);      
    printf("The address of q is %p\n",&q);      
    printf("The address of under q is %p\n\n",q); 

    printf("The value of c is %c\n",c);         
    printf("The value of r is %c\n",*r);        
    printf("The address of c is %p\n",&c);      
    printf("The address of r is %p\n",&r);      
    printf("The address of under r is %p\n",r); 

    return 0;
};