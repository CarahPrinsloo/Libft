void    *ft_memchr(const void *s, int c, size_t n)
{
  int           i;
  const char    *s1;

  i = 0;
  s1 = (const char *)s;
  while (n > 0)
  {
    if(s1[i] == c)
      return (&s[i]);
    i++;
    n--;
  }
  return (NULL);
}
