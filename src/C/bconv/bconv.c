#include "argchk.h"
#include "argtodec.h"
#include "revstr.h"

void main(int argc, char *argv[])
{
    // check main func argument
    checkArg(argc, argv);

    // get decimal number from argv
    reverseString(argv[2]);
    char baseNumber = *(argv[1] + 1);
    long decimalNumber = getDecimal(baseNumber, argv[2]);

    // get various base number
    // char *binaryNumber = decimalToBinary(decimalNumber);
    // char *octalNumber = decimalToOctal(decimalNumber);
    // char *hexNumber = decimalToHex(decimalNumber);

    // print various base number
    // printf("binary: %s\n", binaryNumber);
    // printf("octal: %s\n", octalNumber);
    printf("decimal: %ld\n", decimalNumber);
    // printf("hexadecimal: %s\n", hexNumber);
}
