#include <stdio.h>

#define STEP 20 //символическая константа для подстановки
main()
{
	int fahr;
	for (fahr = 0; fahr<=300; fahr = fahr+STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

}
