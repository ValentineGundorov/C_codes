/*Number and Character Pattern: This C program takes two integer inputs, n and k, and generates a pattern consisting of numbers and characters. It prints a pattern where each row contains numbers from 0 to n-1 followed by the character 'E' in a repeated sequence, based on the input values of n and k*+-9*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


void main()
{
	int n, k,num=0;
	char ch = 'E';
	scanf("%d%d", &n, &k);
	if (n < 0 || k < 0)
	{
		printf("Invalid input!")
			return;
	}
	for (int a = 0; a < n; a++)
	{
		for (int i = 0; i < k; i++)
		{
			for (int i = 0; i < n; i++)
			{
				printf("%2d", num++);
				if (num > n - 1)
					num = 0;
			}
			printf("%2c", ch);
		}
		printf("\n");
		num++;
	}
}