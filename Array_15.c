/* Array is a collection of data items of the same type */
/* "1D array" */
#include<stdio.h>
int main(){
    // int marks[5]; // types of declaratioin (1)
    // marks[0] = 45;
    // marks[1] = 63;
    // marks[2] = 95;
    // marks[3] = 85;
    // marks[4] = 90;

    // int marks[] = {45,63,95,85,90}; // types of declaratioin (2)

    // int marks[5];
    // for(int i = 0; i < 5; i++){
    //     printf("marks[%d] = ",i);
    //     scanf("%d",&marks[i]);
    // }
    
    // printf("\nEntered Marks:\n");
    // for (int i = 0; i < 5; i++) {
    //     printf("marks[%d] = %d\n", i, marks[i]);
    // }

    int marks[2][3];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3;j++){
        printf("marks[%d][%d] = ",i,j);
        scanf("%d",&marks[i][j]);
        }
    }
    
    printf("\nEntered Marks:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3;j++){
        printf("marks[%d][%d] = %d\n",i,j,marks[i][j]);
        }
    }

    return 0;
};