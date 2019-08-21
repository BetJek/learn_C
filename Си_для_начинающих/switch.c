#include <stdio.h>

int main()
{
	int num =2; char letter = 'b';
	switch(num)
	{
		case 1: printf("number 1\n");break;
		case 2: printf("number 2\n");break;
		case 3: printf("number 3\n");break;
		default: printf("number no\n");break;
	}
	switch (letter)
	{
		case 'a':case 'b':case 'c':
			printf("letter is %c\n", letter); break;
		default:printf("letter is no\n");
	}
	return 0;
}
