#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user to enter number
    int n = get_int("Enter the number of block: ");
    
    // creating blocks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}