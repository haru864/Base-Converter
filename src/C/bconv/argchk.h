#ifndef ARGCHK_H_
#define ARGCHK_H_

#define OPTION_PATTERN 4

void checkArg(int, char *[]);
bool isValidNumber(char, char *);
bool isBinary(char *);
bool isOctal(char *);
bool isDecimal(char *);
bool isHexadecimal(char *);

#endif