#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>
#include <stdbool.h>
#include <string.h>
#include "argchk.h"

char validOptionList[OPTION_PATTERN][10] = {"-b", "-o", "-d", "-h"};

void checkArg(int argc, char *argv[])
{
    // correct pattern: bconv -(b|o|d|h) NUMBER
    // number of argument must be three
    if (argc < 3 || argc > 3)
    {
        printf("ERROR: given parameter is too many or few.\n");
        exit(EX_USAGE);
    }

    // option must start with '-', end with 'b', 'o', 'd', or 'h'
    bool isValidOption = false;
    for (int i = 0; i < OPTION_PATTERN; i++)
    {
        if (strcmp(argv[1], validOptionList[i]) == 0)
        {
            isValidOption = true;
        }
    }
    if (!isValidOption)
    {
        printf("ERROR: given option is invalid.\n");
        exit(EX_USAGE);
    }

    // NUMBER must be binary, octal, decimal or hexadecimal
    if (!isValidNumber(*(argv[1] + 1), argv[2]))
    {
        printf("ERROR: given number is invalid.\n");
        exit(EX_USAGE);
    }
}

bool isValidNumber(char type, char *number)
{
    if (type == 'b')
    {
        return isBinary(number);
    }
    else if (type == 'o')
    {
        return isOctal(number);
    }
    else if (type == 'd')
    {
        return isDecimal(number);
    }
    else if (type == 'h')
    {
        return isHexadecimal(number);
    }
    else
    {
        return false;
    }
}

bool isBinary(char *number)
{
    while (*number != '\0')
    {
        if (*number != '0' && *number != '1')
        {
            return false;
        }
        number++;
    }

    return true;
}

bool isOctal(char *number)
{
    while (*number != '\0')
    {
        if (*number < '0' || *number > '7')
        {
            return false;
        }
        number++;
    }

    return true;
}

bool isDecimal(char *number)
{
    while (*number != '\0')
    {
        if (*number < '0' || *number > '9')
        {
            return false;
        }
        number++;
    }

    return true;
}

bool isHexadecimal(char *number)
{
    while (*number != '\0')
    {
        if (!(*number >= '0' && *number <= '9') && !(*number >= 'A' && *number <= 'F'))
        {
            return false;
        }
        number++;
    }

    return true;
}
