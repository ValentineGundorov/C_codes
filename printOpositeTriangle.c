/*Valentin Gundorov
id 336490271
question :printOpositeTriangle
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printOpositeTriangle(int a);


void main()
{
	int a, i;
	scanf("%d", &a);
	printOpositeTriangle(a);

}


void printOpositeTriangle(int a)
{
	int b;
	b = a;
	if (a <= 0)
		return;
	else
	{

		{
			if (a == 1)
				printf("*");

			else {
				for (int i = 0; i < a; i++)
				{
					printf("*");

				}
				a--;
				printf("\n");
				printOpositeTriangle(a);
			}
		}
		printf("\n");
		for (int i = 0; i < b; i++)
		{
			printf("*");
		}


	}


}