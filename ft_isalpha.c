/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

int     ft_isalpha(int test)
{
    if ((test > 64 && test < 91) || (test > 96 && test < 123))
        return (1);
    return (0);
}
