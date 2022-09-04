#include "dectobaseN.h"

extern char numList[16];

char *binary;
char *octal;
char *hexadecimal;

char *decimalToBinary(long decimal)
{
    int numOfDigits = getNumberOfDigits(2, decimal);
    binary = (char *)malloc(sizeof(char) * (numOfDigits + 1));
    setDigits(2, binary, decimal);
    reverseString(binary);
    return binary;
}

char *decimalToOctal(long decimal)
{
    int numOfDigits = getNumberOfDigits(8, decimal);
    octal = (char *)malloc(sizeof(char) * (numOfDigits + 1));
    setDigits(8, octal, decimal);
    reverseString(octal);
    return octal;
}

char *decimalToHex(long decimal)
{
    int numOfDigits = getNumberOfDigits(16, decimal);
    hexadecimal = (char *)malloc(sizeof(char) * (numOfDigits + 1));
    setDigits(16, hexadecimal, decimal);
    reverseString(hexadecimal);
    return hexadecimal;
}

int getNumberOfDigits(int base, long decimal)
{
    int numOfDigits = 0;
    long temp = decimal;

    while (temp > 0)
    {
        numOfDigits++;
        temp /= base;
    }
    return numOfDigits == 0 ? 1 : numOfDigits;
}

void setDigits(int base, char *p, int decimal)
{
    if (decimal == 0)
    {
        *p = '0';
        return;
    }

    while (decimal > 0)
    {
        int remainder = decimal % base;
        *p = numList[remainder];
        p++;
        decimal /= base;
    }
}