#include<stdio.h>
int main(){
    int percentage_12th;
    printf("Enter your 12th percentage : ");
    scanf("%d",&percentage_12th);

    if(percentage_12th <= 34){
        printf("You are fail :(");
    }
    else if(percentage_12th >=35 && percentage_12th <=84){
        printf("CONGRATULATIONS\n");
        printf("You are pass :)");
    }
    else if(percentage_12th >= 85 && percentage_12th <= 100){
        printf("CONGRATULATIONS\n");
        printf("You are pass :)\n");
        printf("You will get \'25000rs.\' from the government");
    }
    else{
        printf("Sorry, This is not valid input");
    }

    return 0;
};