/*Valentin Gundorov
id 336490271
question :fibonacci
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int fib(int a)
{

	if (a <= 1)
		return a;
	else
		return fib(a ) + fib(a - 1);
}


int main()
{
	int a;
	scanf("%d", &a);
	printf("%d", fib(a));
	return 0;
}
