/*вывод таблицы температур по фаренгейту и цельсию дл€ fahr = 0, 20, ..., 300*/
#include <stdio.h>

main()
{
	int fahr, celsius;
	int lower, upper, step;
	
	lower = 0;//нижн€€ граница температур в таблице
	upper = 300;//верхн€€ граница
	step = 20;//величина шага
	
	fahr = lower;
	while (fahr<= upper)
	{
		celsius = 5 * (fahr-32) / 9;
		printf("%3d %6d\n", fahr, celsius);
		fahr = fahr+step;
	}
}
