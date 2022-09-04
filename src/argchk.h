#ifndef ARGCHK_H_
#define ARGCHK_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sysexits.h>
#include <string.h>

#define OPTION_PATTERN 4

void checkArg(int, char *[]);
bool isValidNumber(char, char *);
bool isBinary(char *);
bool isOctal(char *);
bool isDecimal(char *);
bool isHexadecimal(char *);

#endif
