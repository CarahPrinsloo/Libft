
#include <stdlib.h>

int     ft_strlen(char *str)
{
    int j;
    
    j = 0;
    while (str[j] != '\0')
        j++;
    return (j);
}

char    *ft_strmap(char const *str, char (*f)(char))
{
    int i;
    char *cstr;
    
    i = 0;
    if (str == NULL || f == NULL)
       return (NULL);
    cstr = (char *)malloc(sizeof(char) * ft_strlen(str)+1);
    while (str[i] != '\0')
    {
        cstr[i] = f(str[i]);
        i++;
    }
    cstr[i] = '\0';
    return (cstr);
}
