#include<stdio.h>

int main(){
    int a = 3; 
    printf("%d %d %d", a, ++a, a++); // Vs code check Arguments right to left
    return 0;
}