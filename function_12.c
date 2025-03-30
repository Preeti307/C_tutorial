/* functions are used to divide a large c program into a smaller pieces */
#include<stdio.h>
// Declaration & call
/* with arguments & with return value */
int sum(int a,int b); // Declaration
int main(){
    int a,b,c;
    printf("Enter number a = ");
    scanf("%d",&a);
    printf("Enter number b = ");
    scanf("%d",&b);

    c = sum(a , b); // function call
    printf("The sum of a and b is %d",c);
};

int sum(int a,int b){
    return a+b;
}

/* with arguments & without return value */
#include<stdio.h>
void printstar(int n){
  for(int i = 1; i <= n; i ++){
    for(int j = 1; j <=n; j++){
      printf("%c",'*')
    }
    printf("\n");
  }
}

int main(){
  printf("Star pattern : \n");
  printstar(5);
};

/* without argument & with return value */
#include<stdio.h>
int takenumber(){
  int i;
  printf("Enter number i = ");
  scanf("%d",&i);
  return i;
}
int main(){
  int num ;
  num = takenumber();
  printf("the number entered is %d",num);
};

/* without argument & without return value */
#include<stdio.h>
void printname(){
     printf("\"Preeti Khatri\"");
}

int main(){
    printf("Hello World, My Name is ");
    printname();

    return 0;
};
