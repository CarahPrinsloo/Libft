
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    char *str;
    char *tmp;
    
    i = 0;
    while (src[i] != '\0')
        i++;
    str = (char *)malloc((i + 1) * sizeof(char));
    tmp = str;
    i = 0;
    while (src[i] != '\0')
    {
       tmp[i] = src[i];
       i++;
    }
    tmp[i] = '\0';
    return (str);
}