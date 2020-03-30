#include <string.h>

char *ft_strcat(char *dest, const char *src)
{
    int i;
    int j;
    
    j = strlen(dest);
    i = 0;
    while (src[index])
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    return (dest);
}
