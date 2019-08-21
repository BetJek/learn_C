#include <stdio.h>

int main()
{
	int matrix[2][3] = {{'A','B','C'},{1,2,3}};
	
	printf("element [0][0] contains %c \n", matrix[0][0]);
	printf("element [0][1] contains %c \n", matrix[0][1]);
	printf("element [0][2] contains %c \n", matrix[0][2]);
	
	printf("element [1][0] contains %d \n", matrix[1][0]);
	printf("element [1][1] contains %d \n", matrix[1][1]);
	printf("element [1][2] contains %d \n", matrix[1][2]);
}
