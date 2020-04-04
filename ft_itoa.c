#include <stdlib.h>

int        ft_numlength(int n)
{
    int        i;

    i = 0;
    if (n == -2147483648)
        return (11);
    if (n == 0)
        return (1);
    if (n < 0)
    {
        n = n * -1;
        i++;
    }
    while (n >= 10)
    {
        i++;
        n = n / 10;
    }
    if (n >= 0)
      i++;
    return (i);
}

char          *ft_itoa(int n)
{
    int        len;
    char       *str;
    int        neg;
    int         end;

  //check if negative
  neg = 0;
  if (n < 0)
    neg = 1;
  //check length of str
  len = ft_numlength(n);
  //allocate memory for string
  if (!(str = (char*)malloc(sizeof(char) * len+1)))
    return (NULL);
  //make number positive
  if (neg)
    n = n * -1;
  //fill string
  end = len;
  while (len > 0)
  {
    if(end == len)
      str[len] = '\0';
    len--;
    str[len] = (n % 10) + '0';
    n = n / 10;
  }
  //add negative sign
  if (neg == 1)
    str[0] = '-';
  return (str);
}