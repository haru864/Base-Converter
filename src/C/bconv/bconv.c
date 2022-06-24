#include "argchk.h"
#include "argtodec.h"

void main(int argc, char *argv[])
{
    // check main func argument
    checkArg(argc, argv);

    // get decimal number from argv
    reverseString(argv[2]);
    char baseNumber = *(argv[1] + 1);
    long decimalNumber = getDecimal(baseNumber, argv[2]);
    printf("decimal: %ld\n", decimalNumber);
}
