#include <cs50.h>
#include <stdio.h>

int main(void)
{
	//getting a value for x
	int x = get_int("x: ");
	
	//getting a value for y
	int y = get_int("y: ");
	
	//adding value of x and value of y
	printf("%i\n", x + y);
	return 0;
}
