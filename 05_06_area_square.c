#include <stdio.h>
#include <math.h>

int main()
{
    int side;
    printf("Enter the value of side \n");
    scanf("%d", &side);
    printf("The value of area is %f\n", pow(side, 2)); // #include<math.h> pow return in double so change %d to %f

    return 0;
}