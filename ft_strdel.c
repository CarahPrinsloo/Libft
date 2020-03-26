#include <stdio.h>

void ft_strdel(char **ap)
{
    if (ap == NULL)
        return ;
    free(*ap);
    *ap = NULL;
}
