#include <stdio.h>

int main()
{
	float num = 5.75;
	char letter = 'A';
	int zee = 90;
	int x = 7, y = 5;
	double decimal = 0.1234569;
	
	printf("float cast to int: %d \n", (int)num);
	printf("char cast to int: %d \n", (int)letter);
	printf("int cast to char: %c \n", (char)zee);
	printf("float arithmetic: %f \n", (float)x/(float)y);
	printf("double cast to float: %f \n", (float)decimal);
	return 0;
}
