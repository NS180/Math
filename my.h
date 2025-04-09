
#ifndef MYMATHUTILS_H
#define MYMATHUTILS_H

#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int armstrong(int n) {
    int len = 0, temp = n, sum = 0, rem;
    while (temp != 0) {
        temp /= 10;
        len++;
    }
    temp = n;
    while (temp > 0) {
        rem = temp % 10;
        sum += pow(rem, len);
        temp /= 10;
    }
    return (sum == n);
}

// Function to print Fibonacci series up to n terms
int fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");
    
    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
    return 0;
}

// Function to print a number pattern
int pattern(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%d ", k + 1);
        }
        printf("\n");
    }
    return 0;
}

#endif // MYMATHUTILS_H
