#include <stdio.h>

int main()
{
	register int num = 0;
	while (num <5)
	{
		++num;
		printf("pass %d \n", num);
	}
	return 0;
}
