/*Roman Numeral Validation: This C program reads a Roman numeral and validates it for correctness. It checks for proper Roman numeral rules and calculates the equivalent Arabic numeral. It also checks for invalid input sequences and ensures that the numeral doesn't exceed the specified maximum repetitions for each symbol*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>



void main()
{
    int count0 = 0, count = 0, count1 = 0, count2 = 0, count3 = 0, count4 = 0, count5 = 0;
    int sum = 0;
    char letter , temp, temp1;
    scanf("%c", &letter);
    while (letter != '\n')
    {
        temp = letter;
        switch (letter)
        {
        case 'M':
        {

            sum += 1000;
            count0++;
            if (temp1 == 'D' || temp1 == 'C' || temp1 == 'L' || temp1 == 'X' || temp1 == 'V' || temp1 == 'I')
            {
                printf("Invalid input!");
                return;
            }
            break;
        }
        case 'D':
        {

            sum += 500;
            count++;
            if (temp1 == 'C' || temp1 == 'L' || temp1 == 'X' || temp1 == 'V' || temp1 == 'I')
            {
                printf("Invalid input!");
                return;
            }
            if (count > 1)
            {
                printf("Invalid input!");
                return;
            }
            break;
        }
        case 'C':
        {

            sum += 100;
            count1++;

            if (temp1 == 'L' || temp1 == 'X' || temp1 == 'V' || temp1 == 'I')
            {
                printf("Invalid input!");
                return;
            }
            if (count1 > 1)
            {
                printf("Invalid input!");
                return;
            }
            break;
        }
        case 'L':
        {

            sum += 50;
            count2++;

            if (temp1 == 'X' || temp1 == 'V' || temp1 == 'I')
            {
                printf("Invalid input!");
                return;
            }
            if (count2 > 1)
            {
                printf("Invalid input!");
                return;
            }
            break;
        }
        case 'X':
        {

            sum += 10;
            count3++;

            if (temp1 == 'V' || temp1 == 'I')
            {
                printf("Invalid input!");
                return;
            }
            if (count3 > 4)
            {
                printf("Invalid input!");
                return;
            }
            break;
        }
        case 'V':
        {

            sum += 5;
            count4++;

            if (count4 > 1 || temp1 == 'I')
            {
                printf("Invalid input!");
                return;
            }
            break;
        }

        case 'I':
        {

            sum += 1;
            count5++;

            if (count0 == 0 && count == 0 && count1 == 0 && count2 == 0 && count3 == 0 && count4 == 0 && count5 > 0)
            {
                printf("Invalid input!");
                return;
            }
            if (count5 > 4)
            {
                printf("Invalid input!");
                return;
            }
            break;
        }

        default:
        {
            printf("Ivalid input!");
            return;
        }
        }
        temp1 = temp;
        scanf("%c", &letter);

    }


    printf("%d", sum);
}

