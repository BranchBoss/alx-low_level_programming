#include <stdio.h>

char *_strcat(char *dest, const char *src)
{
    char *ptr = dest;

    // Find the end of the destination string
    while (*ptr != '\0') {
        ptr++;
    }

    // Append the source string to the destination string
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }

    // Add the null terminator at the end
    *ptr = '\0';

    return dest;
}

