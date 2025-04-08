/* structure are user defined data type*/

#include<stdio.h>
#include<string.h>
struct familymember{
    char name[25];
    int age;
    char fav_char;
}M1,M2,M3,M4,M5;

// struct familymember M1,M2,M3,M4,M5;   ---> global variable (you can excess this in every function without any error)

int main(){
    // struct familymember M1,M2,M3,M4,M5;  ---> local variable (you can't excess this outside in any function)
    
    printf("Name : ");
    gets(M1.name);
    printf("The name of first person is ");
    puts(M1.name);
    printf("Age : %d\n",54);
    printf("fav_char : %c\n",'K');

    printf("Name : ");
    gets(M2.name);
    printf("The name of second person is ");
    puts(M2.name);
    printf("Age : %d\n",45);
    printf("fav_char : %c\n",'R');

    printf("Name : ");
    gets(M3.name);
    printf("The name of third person is ");
    puts(M3.name);
    printf("Age : %d\n",24);
    printf("fav_char : %c\n",'I');

    printf("Name : ");
    gets(M4.name);
    printf("The name of forth person is ");
    puts(M4.name);
    printf("Age : %d\n",20);
    printf("fav_char : %c\n",'H');

    printf("Name : ");
    gets(M5.name);
    printf("The name of fifth person is ");
    puts(M5.name);
    printf("Age : %d\n",18);
    printf("fav_char : %c\n",'S');
};