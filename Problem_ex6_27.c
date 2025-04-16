#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int*)malloc(3*sizeof(int));
    printf("%d\n",3*sizeof(*ptr));

    for(int i = 0; i < 3; i++){
        printf("Employee %d : enter the number of characters in your ide : ",i+1);
        scanf("%d",&ptr[i]);
    }
    // for(int i = 0; i < 3; i++){
    //     printf("Employee %d : the number of characters in ide : %d\n",i+1,ptr[i]);
    // }

    // if i want to add a one more people so, i will increase my memory by using realloc function
    ptr = (int*)realloc(ptr,1*sizeof(int));
        printf("Employee %d : enter the number of characters in your ide : ",4);
        scanf("%d",&ptr[3]);

        for(int i = 0; i < 3; i++){
            printf("Employee %d : the number of characters in ide : %d\n",i+1,ptr[i]);
        }
        printf("Employee %d : the number of characters in ide : %d\n",4,ptr[3]);
        printf("\n");

    char *chr;
    chr = (char*)malloc(3*sizeof(char));
    for(int i = 0; i < 3; i++){
        printf("Employee %d : enter enter a character : ",i+1);
        scanf(" %c",&ptr[i]);
    }
    for(int i = 0; i < 3; i++){
        printf("Employee %d : character is : %c\n",i+1,ptr[i]);
    }
    free(ptr);
    free(chr);
};