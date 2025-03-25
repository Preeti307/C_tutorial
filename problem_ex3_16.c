#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, i;

    // Taking input from user
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // Printing the first two terms
    for (i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;  // Compute next term
        first = second;         // Shift values
        second = next;
    }

    return 0;
};
