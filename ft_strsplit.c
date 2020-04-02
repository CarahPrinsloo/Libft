#include <stdlib.h>

int wordcounter(char const *str, char c, int index)
{
  int counter;
  
  counter = 0;
  while (str[index] != '\0')
  {
    if(str[index+1] == '\0')
    {
      index++;
      continue;
    }
    else if(str[index] == c && str[index+1] != c)
      counter++;
    index++; 
  }
  return (counter + 1);
}


int wordsize(char *str, char c, int index)
{
  int count;
  
  count = 0;
  while (str[index] != c && str[index] != '\0')
  {
    index++;
    count++;
  }
  return (count);
}


char **ft_strsplit(char const *str, char c)
{
  int i;
  int j;
  int k;
  int l;
  int count;
  char **temp;
  
  i = 0;
  j = 0;
  while (str[i] == c)
    i++;
  count = wordcounter(str, c, i);
  if(!(temp = (char**)malloc(sizeof(char *) * count)))
    return (NULL);
  while (j < count)
  {
    k = 0;
    while (str[i] == c)
      i++;
    l = i;
    if(!(temp[j] = (char *)malloc(sizeof(char) * wordsize(str, c, l)+1)))
      return (NULL);
    while (str[i] != c && str[i] != '\0')
    {
      temp[j][k] =  str[i];
      k++;
      i++;
    }
    temp[j][k] = '\0';
    j++;
  }
  return (temp);
}