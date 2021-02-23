#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get a number from user
    int num1 = get_int("num1: ");
    int num2 = get_int("num2: ");
    
    // divide num1 by num2
    float result = (float)num1 / (float)num2;
    
    printf("Result: %f\n", result);
}