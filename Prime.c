#include <stdio.h>

int main() {
    int n, i, count = 0; //Initialize count value by zero

    printf("Enter a number: "); //Enter input
    scanf("%d", &n); //It store Input value in n

    for (i = 1; i <= n; i++) {
        if (n % i == 0) { // Your Input value divided by loop value and its remainder compair to Zero
            count++; // If Remainder is zero count value increase by 1
        }
    }

    if (count == 2) 
        printf("%d is a Prime number", n);
    else
        printf("%d is Not a prime number", n);

    return 0;
}