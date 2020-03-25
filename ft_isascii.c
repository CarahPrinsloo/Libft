/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

int		ft_isascii(int test)
{
	if (test >= 0 && test <= 127)
	    return (1);
	return (0);
}
