#include<stdio.h>
int main(){
    int n;
    printf("Enter n number : ");
    scanf("%d",&n);
    
    switch(n){
        case 1:
        printf("you can do eveything");
        break;
        case 2:
        printf("you are not alone");
        break;
        case 3:
        printf("god have better plane for you so dont give uo ");
        break;
    default:
        printf("be happy :)");
        break;
    }

    return 0;
};

