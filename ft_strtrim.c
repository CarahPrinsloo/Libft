#include <stdlib.h>

int   whitespace(char c)
{
  if(c <= 32)
    return (1);
  return (0);
}

char  *ft_strtrim(char const *str)
{
  int i;
  int j;
  char *temp;
  
  i = 0;
  j = 0;
  temp = (char *)malloc(sizeof(char) * strlen(str) + 1);
  while (str[i] != '\0')
  {
    if(whitespace(str[i]) && (i == 0 || i == strlen(str)))
    {
      i++;
      continue;
    }
    else if(whitespace(str[i]) && !whitespace(str[i-1]) && !whitespace(str[i+1]))
    {
      temp[j] = str[i];
      j++;
    }
    else if(!whitespace(str[i]))
    {
      temp[j] = str[i];
      j++;
    }
    i++;
  }
  if (j > 0)
  {
    temp[j] = '\0';
    return (temp);
  }
  return (str);
}

