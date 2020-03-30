#include <stdlib.h>
#include <string.h>

char * ft_strjoin(char const *s1, char const *s2)
{
    int len;
    int i;
    int j;
    char *cstr;
    
    i = 0;
    j = 0;
    if (s1 == NULL || s2 == NULL)
        return (NULL);
    len = strlen(s1) + strlen(s2);
    cstr = (char *)malloc(sizeof(char) * len + 1);
    while (i < strlen(s1))
    {
        cstr[i] = s1[i];
        i++;
    }
    while (j < strlen(s2))
    {
        cstr[i] = s2[j];
        i++;
        j++;
    }
    cstr[i] = '\0';
    return (cstr);
}

