#include <stdio.h>

int main()
{
	int a = 4, b = 8, c = 1, d = 1;
	printf("addition: %d \n", a+b);
	printf("subtraction: %d \n", b-a);
	printf("multiplication: %d \n", a*b);
	printf("division: %d \n", b/a);
	printf("modulus: %d \n", a%b);
	
	printf("postfix increment: %d \n", c++);
	printf("Postfix now: %d \n", c);
	printf("prefix increment: %d \n", ++d);
	printf("prefix now: %d \n", d);
	
	
}
