
char *ft_strrchr(const char *str, int c)
{
    char *loc;
    char *cstr;
    int i;
    
    loc = NULL;
    cstr = str;
    i = 0;
    while (cstr[i])
    {
        if (cstr[i] == (char) c)
          loc = &cstr[i];
        i++; 
    }
    return (loc);
}