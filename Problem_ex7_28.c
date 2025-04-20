/* multiplication of matrix */
#include<stdio.h>
int main(){
    int a[2][2], b[2][3], result[2][3], sum = 0;

    printf("Enter the first matrix\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("FIRST MATRIX\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the second matrix\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("SECOND MATRIX\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    // result 
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            result[i][j] = 0;
            for(int k=0; k<2; k++){
                result[i][j] +=  a[i][k] * b[k][j];
            }
        }
    }
    printf("Result!\n");
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
                printf("%d ",result[i][j]);
        }
        printf("\n");
    }
};