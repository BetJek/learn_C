#include <stdio.h>

static int sum = 100;
int main()
{
	extern int sum;//������ ���������� ���������� sum
	extern int num;
	printf("sum is %d \n", sum);
	printf("Num is %d \n", num);
	return 0;
}
