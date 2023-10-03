/*Sum of Numbers: This C program calculates the sum of numbers from 1 to i, where i is the user-defined integer input. It iterates through numbers and displays the cumulative sum*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


void main()
{
	int i;
	int sum = 0, num = 1;
	scanf("%d", &i);
		for (int j = 0; j < i; j++)
		{
			sum += num;
			num++;
			printf("%d", &sum);
		}
	}