/*Roman Numerals to Arabic: This C program reads a Roman numeral string and converts it to an Arabic numeral. It uses a switch statement to map Roman numerals to their respective values and calculates the sum. The program then prints the converted Arabic numeral*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


void main()
{
    char letter;
    int sum = 0;
    for (int i = 0; i < 10000; i++)
    {
    scanf("%c", &letter);
    while (letter != '\n')
    {

        switch (letter)
        {
        case 'M':
        {
            return 1000;
        }

        case 'D':
        {
            return 500;
        }

        case 'C':
        {
            return 100;
        }

        case 'L':
        {
            return 50;
        }

        case 'X':
        {
            return 10;
        }

        case 'V':
        {
            return 5;
        }

        case 'I':
        {
            return 1;
        }

        default:
        {
            printf("Ivalid charakter");
        }
        sum += letter;
        //scanf("%c", &letter);
        }
        printf("%d", sum);
    }
}
