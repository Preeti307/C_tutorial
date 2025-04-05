/* call by value */
// #include<stdio.h>
// int value(int x,int y){    // formal parameters
//     return x+y;
// }
// int main(){
//     int a,b;
//     a = 34;
//     b = 75;
    
//     int sum = value(a,b);   // actual parameters
//     printf("%d",sum);
// };

/* call by reference */
// #include<stdio.h>
// int changevalue(int *x,int *y){
//     int term = *x;
//     *x = *y;
//     *y = term;
// }

// int main(){
//     int a,b;
//     a = 54;
//     b = 60;
//     printf("the values before calling the function are a= %d  ,b=%d \n",a,b);
//     changevalue(&a,&b);
//     printf("the values after calling the function are a= %d  ,b=%d ",a,b);
// };

#include<stdio.h>
int changevalue(int *x,int *y){
    *x = *x + *y;
    int m = *x - *y;
    *y = m - *y;
}

int main(){
    int a,b;
    a = 15;
    b = 5;
    printf("the values before calling the function are a= %d , b=%d \n",a,b);
    changevalue(&a,&b);
    printf("the values after calling the function are a= %d , b=%d ",a,b);
};