/* recursive function */
#include<stdio.h>
int factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    else{
        return(n * factorial(n-1));
    }
}

int main(){
    int n;
    printf("Enter the number you want the factoria of : ");
    scanf("%d",&n);
    printf("factorial of %d is %d",n,factorial(n));
};

/* you can find the factorial on any number without using a recursive function */
// #include<stdio.h>
// int main(){
//     int n,result = 1;
//     printf("Enter the number you want the factoria of : ");
//     scanf("%d",&n);

//     for(int i = 1; i <= n; i++){
//         result = result * i;
//     }
//     printf("factorial of %d is %d",n,result);
// };