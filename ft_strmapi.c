
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int j;
    
    j = 0;
    while (str[j] != '\0')
        j++;
    return (j);
}

char * ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
    unsigned    int i;
    char        *cstr;
    
    i = 0;
    if (str == NULL || f == NULL || !(cstr = (char *)malloc(sizeof(char) * ft_strlen(str)+1)))
       return (NULL);
    while (str[i] != '\0')
    {
        cstr[i] = f(i, str[i]);
        i++;
    }
    cstr[i] = '\0';
    return (cstr);
}
