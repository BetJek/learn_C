#include <stdio.h>

int main()
{
	printf("\nDefault precendence ((2*3)+4)-5: %d\n", 2*3+4-5);
	printf("Explicit precendence 2*((3+4)-5): %d\n",2 *((3+4)-5));
	printf("\nDefault precendence (7*3)%% 2: %d\n", 7*3%2);
	printf("Explicit precendence 7*(3%%2): %d\n", 7*(3%2));
	int num =9;
	printf("\n default precedence(8/2)*4: %d\n", --num/2*sizeof(int));
	num =9;
	printf("Explicit precedence 8/(2*4):%d\n", --num/(2*sizeof(int)));
	return 0;
}
