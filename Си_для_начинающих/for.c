#include <stdio.h>

int main()
{
	int i,j;
	for (i=1; i<4; i++)
	{
		printf("iteration # %d\n",i);
		for (j=1; j<4;j++)
		{
			printf("innter #%d\n", j);
		}
	}
	return 0;
}
