#include <libc/cstring>
#include <libc/cstdint>

void *memcpy(void *dest, const void *src, size_t count)
{
    uint8_t *d = (uint8_t *) dest;
    const uint8_t *s = (const uint8_t *) src;
    size_t i = 0;
    for (; i < count; i++)
    {
        d[i] = s[i];
    }
    return dest;
}
