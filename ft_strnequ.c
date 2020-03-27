int ft_strlen(char *str)
{
    int j;
    
    j = 0;
    while (str[j] != '\0')
        j++;
    return (j);
}

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
   int i;
   
   i = 0;
   if ( (s1 == NULL || s2 == NULL) || (ft_strlen(s1) < n || ft_strlen(s2) < n) )
    return (0);
   while ( (s1[i] != '\0' && s2[i] != '\0') && (i < n))
   {
       if(s1[i] != s2[i])
        return (0);
       i++;
   }
   return (1);
}

