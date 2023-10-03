/*Luhn Algorithm Implementation: This C program takes an integer input num and applies the Luhn algorithm to calculate a checksum digit. It then finds and prints the smallest number that, when added as the checksum, results in a valid Luhn number*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>


void main()
{
	int num, num1, temp, fnum, count=0; //fnum-final number
	int sum = 0,tempsum=0;
	scanf("%d", &num);
	num1 = num;
	while (num > 0)
	{
		temp = num % 10;
		if (count % 2 !=0)
		{
			temp *= 1;

		}
		else
		{
			temp *= 2;
			if (temp>9)
			{
				int temp1;
				temp1 = temp;
				if (temp == 10)
				{
					temp = 1;
				}
				else
				{
					temp1 = temp1 % 10;
					tempsum += temp1;
					temp = temp / 10;
					tempsum += temp;
					temp = tempsum;
				}
			}
		}
		sum += temp;
		num /= 10;
		count++;
	}
	printf("%d\n", sum);
	for ( fnum = 0 ; fnum <10 ;fnum++ )
	{
		sum += fnum;
		if (sum%10)
		{
			sum -= fnum;	
		}
		else {
			printf("%d", num1 * 10 + fnum);
			return;
		}
	}
}