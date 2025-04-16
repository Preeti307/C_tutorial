/* typedef is a keyword used to create a new name (alias) for an existing data type */
#include<stdio.h>
typedef struct student{
    int id;
    float marks;
    char grad;
}str;

int main(){
    //struct student s1,s2;
    str s1,s2;
    s1.id = 76;
    s2.id = 78;
    s1.marks = 98.8;
    s2.marks = 89.8;
    s1.grad = 'A';
    s2.grad = 'A';

    printf("s1.id = %d\n",s1.id);
    printf("s2.id = %d\n",s2.id);
    printf("s1.marks = %0.2f\n",s1.marks);
    printf("s2.marks = %0.2f\n",s2.marks);
    printf("s1.grad = %c++\n",s1.grad);
    printf("s2.grad = %c+\n",s2.grad);


    typedef int* i;
    i b;
    int a = 90;
    b = &a;
    printf("b = %d\n", *b);
    return 0;
};