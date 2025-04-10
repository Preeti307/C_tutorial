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
    // struct familymember M1,M2,M3,M4,M5;  ---> local variable (you can't excess this outside, in any function)
    
    printf("Name : ");
    gets(M1.name);
    printf("The name of first person is ");
    puts(M1.name);
    M1.age = 54;
    printf("Age : %d\n",M1.age);
    M1.fav_char = 'K';
    printf("fav_char : %c\n",M1.fav_char);

    printf("Name : ");
    gets(M2.name);
    printf("The name of second person is ");
    puts(M2.name);
    M2.age = 45;
    printf("Age : %d\n",M2.age);
    M2.fav_char = 'R';
    printf("fav_char : %c\n",M2.fav_char);

    printf("Name : ");
    gets(M3.name);
    printf("The name of third person is ");
    puts(M3.name);
    M3.age = 24;
    printf("Age : %d\n",M3.age);
    M3.fav_char = 'I';
    printf("fav_char : %c\n",M3.fav_char);

    printf("Name : ");
    gets(M4.name);
    printf("The name of forth person is ");
    puts(M4.name);
    M4.age = 20;
    printf("Age : %d\n",M4.age);
    M4.fav_char = 'H';
    printf("fav_char : %c\n",M4.fav_char);

    printf("Name : ");
    gets(M5.name);
    printf("The name of fifth person is ");
    puts(M5.name);
    M5.age = 18;
    printf("Age : %d\n",M5.age);
    M5.fav_char = 'S';
    printf("fav_char : %c\n",M5.fav_char);
};
