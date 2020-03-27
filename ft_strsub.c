#include <stdlib.h>

int ft_strlen(char *str)
{
    int j;
    
    j = 0;
    while (str[j] != '\0')
        j++;
    return (j);
}

char * ft_strsub(char const *s, unsigned int start, size_t len)
{
    char    *cstr;
    int     i;
    
    i = 0;
    if (s == NULL || start > ft_strlen(s) || len > ft_strlen(s))
        return (NULL);
    cstr = (char *)malloc(sizeof(char) * len + 1);
    while (i < len && s[start] != '\0')
    {
        cstr[i] = s[start];
        start++;
        i++;
    }
    cstr[i] = '\0';
    return (cstr);
}

