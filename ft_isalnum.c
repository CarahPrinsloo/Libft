/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

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

