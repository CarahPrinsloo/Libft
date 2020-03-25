
int ft_strncmp(const char *str1, const char *str2, size_t n) 
{
    int i;
    
    i = 0;
    while(i < n)
    {
        if(str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
    return (0);
}