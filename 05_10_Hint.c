//  Generated by Black Box
// #include <stdio.h>

// void printFibonacci(int n)
// {
//     int t1 = 0, t2 = 1, nextTerm = 0;

//     for (int i = 1; i <= n; ++i)
//     {
//         // Prints the first two terms.
//         if (i == 1)
//         {
//             printf("%d, ", t1);
//             continue;
//         }
//         if (i == 2)
//         {
//             printf("%d, ", t2);
//             continue;
//         }
//         nextTerm = t1 + t2;
//         t1 = t2;
//         t2 = nextTerm;

//         printf("%d, ", nextTerm);
//     }
// }

// int main()
// {
//     int n;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     printFibonacci(n);

//     return 0;
// }

// Fibonacci series using Recursion
#include <stdio.h>

int fibonacci(int n);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}