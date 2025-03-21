#include<stdio.h>
int main(){
    //do while loop :
    int n;
    printf("Enter number n : ");
    scanf("%d",&n);
    
    int i = 1;
    do{
        printf("%d\n",n*i);
        i++;
    }while(i<=10);

    //while loop :
    // while(i<=10){
    //     printf("%d\n",n*i);
    //     i++;
    // }

    //for loop :
    // for(int i = 1; i <= 10; i++){
    //     printf("%d\n",n*i);
    // }

    //break statement :
    // for(int i = 1; i <= 10; i++){
    //     if(n*i == 20){
    //        int mul = n*i;
    //         break;
    //     }
    //     printf("%d\n",n*i);
    // }

    //continue statement :
    // for(int i = 1; i <= 10; i++){
       
    //     if(n*i == 20){
    //         int mul = n*i;
    //         continue;
    //     }
    //     printf("%d\n",n*i);
    // }
};