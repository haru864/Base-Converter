#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>
#include <string.h>
#include <stdbool.h>

#define ERROR_MESSAGE_SIZE 256
#define OPTION_PATTERN 4

char validOptionList[OPTION_PATTERN][10] = {"-b", "-o", "-d", "-h"};

void checkArg(int, char *[]);

void main(int argc, char *argv[])
{
    // check main argument
    checkArg(argc, argv);

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}

void checkArg(int argc, char *argv[])
{
    // correct pattern: bconv -(b|o|d|h) NUMBER
    // number of argument must be three
    if (argc < 3 || argc > 3)
    {
        printf("ERROR: given parameter is too many or few.\n");
        exit(EX_USAGE);
    }

    printf("%c\n", *argv[1]);
    printf("%c\n", *(argv[1] + 1));
    // option must start with '-', and end with 'b', 'o', 'd', or 'h'
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
        printf("ERROR: given parameter is invalid.\n");
        exit(EX_USAGE);
    }
}
