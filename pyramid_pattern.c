/*Pyramid Pattern Generator: This C program takes an integer input num and generates a pyramid pattern of zeros. It prints a pattern where each row contains '0's, with spaces in the middle, forming a pyramid shape based on the input number*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>



void main()
{
	int num;
	printf("Please enter a number :\n");
	scanf("%d", &num);
	for (int i = 1; i <= num; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("0");

		}
		for (int a = 0; a < num * 2 - 2 * i; a++)
		{
			printf(" ");

		}
		for (int a = 1; a <= i; a++)
		{
			printf("0");
		}
		printf("\n");
	}


}