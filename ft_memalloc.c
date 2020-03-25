#include <stdlib.h>
#include <string.h>

void    *ft_memalloc(size_t size)
{
    int     i;
    char    *memry;
    
    i = 0;
    memry = (void *)malloc(size * sizeof(size_t));
    if (memry == NULL)
        return (NULL);
    else
    {
        memset(memry, '\0', size);
        return (memry);
    }
}