void  ft_strclr(char *str)
{
  int i;
  
  i = 0;
  while (str[i] != '\0')
  {
    str[i] = '\0';
    i++;
  }
}