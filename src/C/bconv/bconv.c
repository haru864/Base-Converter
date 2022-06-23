#include <stdio.h>
#include <stdlib.h>
#include <sysexits.h>
#include <string.h>
#include <stdbool.h>
#include "argchk.h"

#define ERROR_MESSAGE_SIZE 256

void main(int argc, char *argv[])
{
    // check main argument
    checkArg(argc, argv);
}
