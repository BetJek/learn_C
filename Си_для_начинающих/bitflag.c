#include <stdio.h>

int main()
{
	int flags = 8;//двоичное число 1000
	
	flags =flags|2;//1000/0010=1010(десятичное число 10)
	printf("flag 1: %s\n", ((flags&1)>0)?"on":"off");
	printf("flag 2: %s\n", ((flags&2)>0)?"on":"off");
	printf("flag 3: %s\n", ((flags&4)>0)?"on":"off");
	printf("flag 4: %s\n", ((flags&8)>0)?"on":"off");
	
	char mask =15;//двоичное представление 00001111
	flags =~flags&mask;//~(1010&1111=1010)=0101
	printf("flag 1: %s\n",((flags&1)>0)?"ON":"OFF");
	printf("flag 2: %s\n",((flags&2)>0)?"ON":"OFF");
	printf("flag 3: %s\n",((flags&4)>0)?"ON":"OFF");
	printf("flag 4: %s\n\n",((flags&8)>0)?"ON":"OFF");

	printf("flags decimal value is %d\n",flags);
	

	flags =flags<<1;//0101<<1=1010
	printf("flags decimal value is now %d\n", flags);
	return 0;
}
