#include "argtodec.h"

char numList[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

long getDecimal(char baseNumber, char *number)
{
    long decimal = 0;
    long num = 1;

    for (int i = 0; *(number + i) != '\0'; i++)
    {
        decimal += getNumber(*(number + i)) * num;

        if (baseNumber == 'b')
        {
            num *= 2;
        }
        else if (baseNumber == 'o')
        {
            num *= 8;
        }
        else if (baseNumber == 'd')
        {
            num *= 10;
        }
        else if (baseNumber == 'h')
        {
            num *= 16;
        }
    }

    return decimal;
}

int getNumber(char ch)
{
    for (int i = 0; i < sizeof(numList) / sizeof(char); i++)
    {
        if (ch == numList[i])
        {
            return i;
        }
    }

    return 0;
}

void reverseString(char *p)
{
    char *left = p;
    char *right = NULL;

    while (*p != '\0')
    {
        right = p;
        p++;
    }

    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
