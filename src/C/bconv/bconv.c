#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>

#define ERROR_MESSAGE_SIZE 256

void checkArg(int, char *[]);

void main(int argc, char *argv[])
{
    printf("%d\n", argc);
    checkArg(argc, argv);

    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
}

void checkArg(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
    {
        printf("ERROR: given parameter is too many or few.\n");
        exit(EX_USAGE);
    }
}
