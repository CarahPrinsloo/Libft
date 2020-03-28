int     isDigit(int test)
{
    if (test > 47 && test < 58)
        return (1);
    return (0);
}

int     isLetter(int test)
{
    if ((test > 64 && test < 91) || (test > 96 && test < 123))
        return (1);
    return (0);
}

int    ft_isalnum(int test)
{
    if (isDigit(test) || isLetter(test))
        return (1);
    return (0);
}
