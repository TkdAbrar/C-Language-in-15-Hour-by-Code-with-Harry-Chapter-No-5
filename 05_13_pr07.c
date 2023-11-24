#include <stdio.h>
// Printing Star (*) by odd numbers 
void printPattern(int n);
int main()
{
    int n = 6;
    printPattern(n);
    return 0;
}
// for n = 3
// *
// ***
// *****
// 1 - 1
// 2 - 3
// 3 - 5
// (2n - 1)
void printPattern(int n)
{
    if (n == 1)
    {
        printf("*\n");
        return;
    }
    printPattern(n - 1);
    for (int i = 0; i < (2 * n - 1); i++) // i<(2*n-1) formula for printing odd numbers
    {
        printf("*");
    }
    printf("\n");
}
