#include <libc/cstring>
#include <libc/cstdint>

void *memset(void *dest, int ch, size_t count)
{
    uint8_t c = (uint8_t) ch;
    uint8_t *d = (uint8_t *) dest;
    size_t i = 0;
    for (; i < count; i++)
    {
        d[i] = c;
    }
    return dest;
}
