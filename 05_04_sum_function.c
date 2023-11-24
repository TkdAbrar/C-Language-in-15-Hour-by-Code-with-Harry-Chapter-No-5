#include <stdio.h>
// Sum is a function which takes a and b as input and return as an output
int sum(int a, int b); // Function prototype declaration

int main()
{
    int c;
    c = sum(2, 15); // Function call
    printf("The value of c is %d\n", c);
    return 0;
}

int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}