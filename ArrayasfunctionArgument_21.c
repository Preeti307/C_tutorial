#include<stdio.h>
int fun1(int array[]){
    array[0] = 6;
    for(int i = 0; i<=4; i++){
        printf("The value at index [%d] is %d \n",i,array[i]);
    }
    printf("\n");  
    //array[0] = 6;
}

int main(){
    int num[] = {5,10,15,20,25};
    for(int i = 0; i<=4; i++){
        printf("The value at index [%d] is %d \n",i,num[i]);
    }
    printf("\n");
    
    fun1(num);
    printf("The value at index [0] is %d ",num[0]);
};