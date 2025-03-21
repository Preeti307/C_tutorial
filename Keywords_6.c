/* 1> for long & long long keywords */
#include <stdio.h>

int main() {
    long long int num = 9926029041LL;  // Use 'LL' for long long int
    printf("Number = %lld\n", num);  // Use %lld for long long int
   
    long int n = 992602904;
    printf("n = %ld\n",n);
    return 0;
}


/* 2> for double keywords */
// #include <stdio.h>

// int main() {
//     double num = 12.345678;
    
//     printf("Using %%f: %f\n", num);  // Works for double
//     printf("Using %%lf: %lf\n", num);  // Also works for double

//     printf("Using %%0.2lf: %.2lf\n", num);  // Prints with 2 decimal places
    
//     return 0;
// };

/* 3> for long double keywords */
// #include <stdio.h>

// int main() {
//     long double num = 12345.67890123456789L;  // 'L' denotes long double

//     printf("Using %%Lf: %Lf\n", num);  // Correct way to print long double

//     return 0;
// };




// 4> using %lf with scanf() :
// #include <stdio.h>

// int main() {
//     double num;
    
//     printf("Enter a double value: ");
//     scanf("%lf", &num);  // Correct way to read a double
    
//     printf("You entered: %lf\n", num);
    
//     return 0;
// };

// 5> using %LF with scanf() :
// #include <stdio.h>

// int main() {
//     double num;
    
//     printf("Enter a double value: ");
//     scanf("%lf", &num);  // Correct way to read a double
    
//     printf("You entered: %lf\n", num);
    
//     return 0;
// };

