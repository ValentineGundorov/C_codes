/*Digit Extraction: This C program reads an integer input, extracts the last digit, and returns it using a user-defined function. It demonstrates basic digit extraction in C*/


#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int func(int num);

void main()
{
	int num,fnum;
	scanf("%d", &num);
	fnum = int func();
	printf("%d", fnum);
}

int func(int num)
{
	int temp
	if (num / 10)
		temp = num % 10;
}