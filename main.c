#include <stdio.h>

#define Size 25 //макс размер массива
/*
main()
{
	extern int i; //доступк переменной в другом файле
	static int word[Size]; //переменная доступная только в этом файле
	register int word1[Size];//переменная в регистре процессора только локальная
	
	for (i = 0; i<Size; i++)
	{
		word[i]=getchar();
	}
	for (i=0; i<Size; i++)
	{
		if ((word[i]!='\t'))
		{
			word1[i]=word[i];
		}
	}
	
	i=0;
	while (i<Size)
	{
		printf("%c",word1[i]);
		i++;
	}
	return 0;
}*/
