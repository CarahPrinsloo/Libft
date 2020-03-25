#include <stdlib.h>

char *ft_strnew(size_t size)
{
  char *str;
  int i;
  
  i = 0;
  str = (char *)malloc((size + 1) * sizeof(char));
  if (str == NULL)
        return (NULL);
  else
  {
    while (i < size + 1)
    {
      str[i] = '\0';
      i++;
    }
    return (str);
  }
}