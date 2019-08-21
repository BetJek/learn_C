#include <stdio.h>

int main()
{
	enum snooker
	
	{RED=1,YELLOW,GREEN,BROWN,BLUE,PINK,BLACK};
	
	int total;
	
	printf("\nIpotted ared worth %d\n", RED);
	printf("then a black worth %d\n", BLACK);
	printf("followed by another red worth %d\n", RED);
	printf("and finally a blye worth %d\n", BLUE);
	
	total = RED + BLACK + RED +BLUE;
	printf("\nAltogether I scored %d\n", total);
	return 0;
	
}
