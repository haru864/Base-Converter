#ifndef DECTOBASEN_H_
#define DECTOBASEN_H_

#include <stdlib.h>
#include "revstr.h"
#include "argtodec.h"

char *decimalToBinary(long);
char *decimalToOctal(long);
char *decimalToHex(long);
int getNumberOfDigits(int, long);
void setDigits(int, char *, int);

#endif
