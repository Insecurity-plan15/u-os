#include <libc/cstring>

char *strcpy(char *dest, const char *src)
{
    char *retptr = dest;
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    return retptr;
}
