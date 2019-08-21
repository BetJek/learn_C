#include <stdio.h>
#include <stdio.h>

int main()
{
	char s1[100]="a Place for Everything ";
	char s2[]="and Everything in its Place";
	char s3[100]="The Truth is Rarely Pure";
	char s4[]="and Never Simple. - Oscar Wilde";
	strcat(s1,s2);
	printf("\n%s\n",s1);
	strncat(s3,s4,17);
	printf("\n%s\n",s3);
	strncat(s3, (s4+17), 14);//добавить 2 строку со смещением
	printf("\n%s\n",s3);
	return 0;
}
