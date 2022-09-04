#include "revstr.h"

void reverseString(char *p)
{
    char *left = p;
    char *right = NULL;

    while (*p != '\0')
    {
        right = p;
        p++;
    }

    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
