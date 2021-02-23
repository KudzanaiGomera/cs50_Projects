#include <cs50.h>
#include <stdio.h>

int get_positive_int(void)
{
    int n;
    
    do{
         n = get_int("Enter positive number: ");
    }
    while(n < 1);
    return n;
}

void meow(void){
    int n = get_positive_int();
    for (int i = 0; i < n; i++){
        printf(" Meow ");
    }
    printf("\n");
}
int main(void)
{
    meow();
    return 0;
}