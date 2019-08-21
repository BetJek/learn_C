#include <stdio.h>

int main()
{
	char letter;
	int num1, num2;
	printf("enter any one keyboard character ");
	scanf("%c", &letter);
	printf("enter two integers separated by a space: ");
	scanf("%d, %d", &num1, &num2);
	printf("numbers input: %d and %d \n", num1, num2);
	printf("letter input: %c", letter);
	printf("stored at: %p \n", &letter);
	return 0;
	
}
