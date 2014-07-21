#include <libc/cstring>

char *strncpy(char *dest, const char *src, size_t count)
{
    for (size_t i = 0; i < count; i++)
    {
        if (src[i] == '\0')
        {
            break;
        }
        dest[i] = src[i];
    }
    return dest;
}
