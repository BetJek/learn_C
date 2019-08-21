#include <stdio.h>

int main()
{
	int num = 1234567890;
	printf("size of int data type is %d bytes\n", sizeof(int));
	printf("size of int variable is %d bytes\n", sizeof(num));
	printf("size of an int array is %d bytes\n", sizeof(int[3]));
	
	struct {int score; char grade;
	} result;
	printf("size of a structure is %d bytes\n", sizeof(result));
	return 0;
}
