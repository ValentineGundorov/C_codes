/*Valentin Gundorov
id 336490271
question :printPrimeFactors
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//#include <stdlib.h>

void devideNum(int);

void main()
{
	int num;
	scanf("%d", &num);
	devideNum(num, 2);
	//return 0;
}

void devideNum(int num, int div)
{
	if (num == 1)
		return;

	while (num % div == 0) 		
	{
		printf("%d", div);
		num /= div;
		printf(" ");
	}
	div = div + 1;
	devideNum(num, div);
}