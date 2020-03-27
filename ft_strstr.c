#include <stdio.h>

int     ft_strlen(char *str)
{
    int k;
    
    k = 0;
    while (str[k] != '\0')
        k++;
    return (k);
}

char	*ft_strstr(const char *sub, const char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(sub) == 0)
		return (str);
	while (str[i] != '\0')
	{
	    j = 0;
		while (sub[j] == str[i + j])
		{
			if (sub[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int     main(void)
{
    char const s1[] = "Hello";
    char const s2[] = "l";
    printf("%s", ft_strstr(s2, s1));
}
