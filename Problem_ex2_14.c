#include<stdio.h>
int main(){
    int choice,kms,inches,cms,pound ;

    printf(" Enter 1 for kms to miles \n Enter 2 for inches to foot \n Enter 3 for cms to inches \n Enter 4 for pound to kgs \n Enter 5 for inches to meters \n");

    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice){
        case 1:
        printf("Enter value of kms : ");
        scanf("%d",&kms);

        printf("%d kms is equal to %0.4f miles",kms,kms*0.621371);
        break;

        case 2:
        printf("Enter value of inches : ");
        scanf("%d",&inches);

        printf("%d inches is equal to %0.4f foot",inches,inches*0.0833333);
        break;

        case 3:
        printf("Enter value of cms : ");
        scanf("%d",&cms);

        printf("%d cms is equal to %0.4f inches",cms,cms*0.393701);
        break;

        case 4:
        printf("Enter value of pound : ");
        scanf("%d",&pound);

        printf("%d pound is equal to %0.4f kgs",pound,pound*0.453592);
        break;

        case 5:
        printf("Enter value of inches : ");
        scanf("%d",&inches);

        printf("%d inches is equal to %0.4f meters",inches,inches*0.0254);
        break;

        default :
        printf("This is not valid number");
    }
};