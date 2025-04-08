    /* string */
// #include<stdio.h>
// #include<string.h>
// int printstr(char str[]){
//     int i=0;
//     while(str[i] != '\0'){
//         printf("%c",str[i]);
//         i++;
//     }
// }
// int main(){
//     char name[] = "SAMEER KHATRI";   // they both are correct declaration typein string (1st declaration type)
//     printf("%s\n",name);
//     char str[] = {'P','R','E','E','T','I',' ','K','H','A','T','R','I','\0'};   // (2nd declaration type)
//     printstr(str);
//     return 0;
// };


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[50];
//     gets(str);  // gets -> take input
//     printf("using printf :\n");
//     printf(":) %s\n",str);    // give output
//     printf("using puts :\n");
//     puts(str);  // puts -> give output
// };


    /* string function */

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[] = "PREETI ";
//     char str2[] = "KHATRI";

    // printf("\nstrcat function : ");
    // puts(strcat(str1,str2));

    // printf("strrev function : ");
    // puts(strrev(str1)); 
    // printf("strrev function : ");
    // puts(strrev(str2));

    // printf("strlen function : \n");
    // printf("the lenght of first string is : %d\n",strlen(str1));
    // printf("the lenght of second string is : %d\n",strlen(str2));

    // printf("strcpy function : ");
    // puts(strcpy(str1,str2));
    // puts(strcpy(str2,str1));

    //printf("%d",strcmp(str1,str2));
//};

#include<stdio.h>
//making a progmamme in which a function will return the reverse of a array before and after
void func1(int arg[])
{
    printf("before reverse :-\n");
for (int i = 0; i < 6; i++)
{
    printf("%d ",arg[i]);
}
printf("\n");
printf("After reverse :-\n");
for (int j = 5; j > -1; j--)
{
    printf("%d ",arg[j]);
}
}
int main()
{
int s1[]={1,2,3,4,5,6};
func1(s1);
return 0;
};