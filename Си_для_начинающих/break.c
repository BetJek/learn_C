#include <stdio.h>

int main()
{
	int i,j;
	for(i =1;i<4;i++)
	{
		for(j=1;j<4;j++)
		{
			printf("Running i=%d j=%d\n",i,j);
			if (i==2&&j==1)
			{
				printf("Breaks inner loop whe i=%d and j=%d\n",i,j);
				break;
			}
			if(i==1&&j==1)
			{
				printf("continues inner loop when i=%d and j=%d\n",i,j);
				continue;
			}
			
		}
	}
	return 0;

}
