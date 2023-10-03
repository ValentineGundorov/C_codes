/*Arabic to Roman Numeral Conversion: This C program takes an integer input and converts it into a Roman numeral. It employs a series of conditional statements to determine the appropriate Roman numeral representation while subtracting the corresponding value from the input number*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


void main()
{
	int num;
	char ch;
	printf("please enter a number:");
	scanf("%d", &num);
	while (num > 0)
	{

	
		if (num / 1000 != 0)
		{
			num = num - 1000;
			ch = 'M';
		}
		else if (num / 500 != 0)
		{
			num = num - 500;
			ch = 'D';
		}
		else if (num / 100 != 0)
		{
			num = num - 100;
			ch = 'C';
		}
		else if (num / 50 != 0)
		{
			num = num - 50;
			ch = 'M';
		}
		else  if (num / 10 != 0)
		{
			num = num - 10;
			ch = 'X';
		}
		else  if (num / 5 != 0)
		{
			num = num - 5;
			ch = 'V';
		}
		else if (num / 1 != 0)
		{
			num = num - 1;
			ch = 'I';
		}
		else
		{
			break;
		}

			printf("%c", ch);
	}
}