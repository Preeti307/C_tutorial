// #include<stdio.h>

// void arrriv(int arr[]){
//     for(int i = 0; i < 5/2; i++){
//         int tem = arr[i];
//         arr[i] = arr[4-i];
//         arr[4-i] = tem;
//     }
// };

// void arrprintf(int arr[]){
//     printf("after reverse : \n");
//     for(int i = 0; i < 5; i++){
//         printf("the value of element %d is %d\n",i,arr[i]);
//     }
// };
// int main(){
//     int arr[] = {12,24,36,48,60};
//     printf("before reverse :\n");
//     for(int i = 0; i < 5; i++){
//         printf("the value of element %d is %d\n",i,arr[i]);
//     }

//     arrriv(arr);
//     arrprintf(arr);
// };

#include <stdio.h>
#include <string.h>
struct driverdetails
{
    char firstname[50];
    char lastname[50];
    int drivinglicenseNo;
    char route[50];
    int kms;
} s[3];

int main()
{
    int n;
    printf("enter the number of driver who filled their details : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n >= 1 && n <= 3)
        {
            printf("enter your name, drivinglicenseNo, route & kms for %d driver : \n", i);
            printf("enter the first name : \n");
            scanf(" %s", &s[i].firstname);
            printf("enter the last name : \n");
            scanf(" %s", &s[i].lastname);
            printf("enter the drivinglicenseNo : \n");
            scanf(" %d", &s[i].drivinglicenseNo);
            printf("enter the route : \n");
            scanf(" %s", &s[i].route);
            printf("enter the kilometer : \n");
            scanf(" %d", &s[i].kms);
            printf("\n");
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (n >= 1 && n <= 3)
        {
            printf("here are the drivers details !! \n");
            printf("the name of %d driver is %s \n", i, s[i].firstname);
            printf("the name of %d driver is %s \n", i, s[i].lastname);
            printf("the driving license no of %d driver is %d \n", i, s[i].drivinglicenseNo);
            printf("the route of %d driver is %s \n", i, s[i].route);
            printf("kms of %d driver is %d \n\n", i, s[i].kms);
        }
    }
    if (n > 3)
    {
        printf("only three drivers can fill their details in the first round ");
    }
};
