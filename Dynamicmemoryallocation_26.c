/* dynamic memory -> when you program and suddenly you need more memory at that time you can you can use malloc,calloc,realloc and free function(it is creat a memory in the form of array) */
// malloc -> malloc creat a memory block ,which contain a garbage values
// malloc(): [ ][ ][ ][ ][ ] 

// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     int *ptr;
//     ptr = (int *)malloc(3 * sizeof(int));
//     for(int i=0; i<3; i++){
//         printf("enter the value of %d index = ",i);
//         scanf("%d",&ptr[i]);
//     }
//     for(int i=0; i<3; i++){
//         printf("the value at %d index is = %d\n",i,ptr[i]);
//     }
//     return 0;
// };

// calloc -> calloc creat a memory block ,which contain a null [0] character
// calloc(): [0][0][0][0][0]
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     float *ptr;
//     ptr = (float *)calloc(3 , sizeof(float));
//     for(int i=0; i<3; i++){
//         printf("enter the value of %d index = ",i);
//         scanf("%f",&ptr[i]);
//     }
//     for(int i=0; i<3; i++){
//         printf("the value at %d index is = %0.2f\n",i,ptr[i]);
//     }
//     return 0;
// };

// realloc -> Used when you want to increase or decrease memory size
// realloc(): [0][0][0][0][0][ ][ ][ ][ ][ ]
// free -> When you're done using the memory, you should return it to the system using free()
// free(): [ Released ]
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    ptr = (int *) malloc(3*sizeof(int));
    if(ptr == NULL){
        printf("memory not allocated \n");
    }

    for(int i= 0; i<3; i++){
        ptr[i] = 1+i;
    }
    for(int i= 0; i<3; i++){
        printf("%d\n",ptr[i]);
    }

    ptr = (int *)realloc(ptr,6*sizeof(int));
    ptr[3] = 4;
    ptr[4] = 5;
    ptr[5] = 6;
    for(int i = 0; i < 6; i++){
        printf("%d = %d\n",i,ptr[i]);
    }

    free(ptr);
    return 0;
};