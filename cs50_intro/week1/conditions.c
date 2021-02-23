#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get user input either Y or N
    char c = get_char("Do you agree? ");
    
    //statements to check the user input to the condition
    if (c == 'y' || c == 'Y')
        printf("Agreed\n");
    else if (c == 'n' || c == 'N')
        printf("Denied\n");
    else
        printf("Wrong input\n");
    return 0;
}