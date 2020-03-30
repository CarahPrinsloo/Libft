
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    int i;
    char *str;
    char *tmp;
    
    i = 0;
    while (src[i] != '\0')
        i++;
    str = (char *)malloc(sizeof(char) * (i + 1));
    if (str == NULL)
		return (NULL);
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
