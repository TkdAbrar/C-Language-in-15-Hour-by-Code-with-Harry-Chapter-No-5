#include <stdio.h>
// Code by black box ai

// Function to calculate the sum of n natural numbers using recursion
int calculateSum(int n)
{
    if (n <= 0)
        return 0;
    else
        return n + calculateSum(n - 1);
}

int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    int sum = calculateSum(n);
    printf("Sum of %d natural numbers is: %d", n, sum);

    return 0;
}