/*Valentin Gundorov
Cumulative Sum: This C program calculates the cumulative sum of numbers from 1 to i, where i is a user-defined integer input. It iterates through numbers and displays the cumulative sum in a formatted manner.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


void main()
{
	int i;
	int sum = 1, num = 0;
	scanf("%d", &i);
	for (int j = 0; j < i; j++)
	{
		sum += num;			
		num++;
		printf("%3d", sum);
	}
	printf("\n");
}