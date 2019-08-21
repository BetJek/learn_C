#include <stdio.h>

#undef DEBUG

int main()
{
	#if DEBUG ==1
		printf("Debug status 1 \n");
	#elif DEBUS ==2
		printf("Debug status is 2 \n");
	#else
		#ifdef DEBUG
			printf("DEBUG is defined! \n");
		#endif
		#ifndef DEBUG
			printf("Debug is not defined! \n");
		#endif
	#endif
	return 0;
}
