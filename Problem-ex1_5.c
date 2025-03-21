/* 1>> print the multiplication table of a number entered by the user */
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter any number you want multiplication table of :\n");
//     printf("num  = ");
//     scanf("%d",&num);
    
//      for(int i = 1; i <= 10; i++){
//         int x = num * i;
//         printf("%d * %d = %d ", num,i,x);
//         printf("\n");
//      }
//      printf("\n");

//     //Reverse table :
//     printf("Reverse table :\n");
//      for(int i = 10; i >= 1; i--){
//         int x = num * i;
//         printf("%d * %d = %d ", num,i,x);
//         printf("\n");
//      }

//      return 0;
// };

#include<stdio.h>
int main() {
   int subject;
   printf("enter 1 for science\n");
   printf("enter 2 for maths\n");    
   printf("enter 3 for both");
   printf("enter your subject number :");
   scanf("%d", &subject);
if (subject==1 || subject==2) {
   printf("your gift is of $15");
}
else if(subject==3) {
   printf("your gift is of $45");
}
else {
   printf("enter a valid subject number and try again");
}
return 0;
};