#include <stdio.h>
/*
main()
{
	long nc;
	
	nc =0;
	while (getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}*/
/*
main()
{
	double nc;
	
	for (nc =0; getchar() !=EOF; ++nc)
		;
	printf("%.0f\n", nc);
}*/
/*
main()
{
	int c,nl;
	nl =0;
	while((c = getchar()) !=EOF)
		if (c =="\n")
			++nl;
	printf("%d\n", nl);
}*/
/*
main()
{
	int nc, c;
	nc = 0;
	while ((c=getchar()) != EOF)
	{
		if (c ==' ')
		{
			nc += 1;
		}
	}
	printf("%d\n", nc);
}
*/
/*
#define IN 1
#define OUT 0
main()
{
	int c, nl, nw, nc, state;
	
	state = OUT;
	nl = nw = nc =0;
	while ((c = getchar()) != EOF) 
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c ==' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
}*/
/*
main()
{
	int c, word;
	while ((word = getchar()) !=EOF)
	{
		if (word != '\n' && word != ' ')
			putchar(word);
		else
			putchar('\n');
	}
}*/

main()
{
	int c, i, nwhite, nother;
	int ndigit[10];
	nwhite = nother = 0;
	for (i= 0; i< 10; ++i )
		ndigit[i] = 0;
	while ((c = getchar()) !=EOF)
		{
			if (c>='0' && c <='9')
				++ndigit[c-'0'];
			else if (c==' '|| c =='\n'||c=='\t')
				++nwhite;
			else
				++nother;	
		}
	printf("digits = ");
	for (i=0;i<10; ++i)
		printf(" %d", ndigit[i]);
	printf(", white space = %d, other =%d\n", nwhite, nother);
}

