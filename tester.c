

#include "includes/minishell.h"




char	**argsplit(char *str)
{
	char	**arr;
	int		loop;

	loop = 0;
	while (str[loop])
	{
        ft_putnbr(loop);
		if (str[loop] == '"')
		{
			loop++;
			while (str[loop] != '"')
				loop++;
		}
		else if (ft_iswhitespace(str[loop]))
			str[loop] = '"';
		loop++;
	}
	arr = ft_strsplit(str, '"');
	ft_strdel(&str);
	return (arr);
}


int main(void)
{
    char **tester;
    int index = 0;
    int second = 0;

   

    ft_putstr("do i get here?");
    tester = argsplit("this is the strings that i should use to test");
    while(tester[second])
    {
        
        ft_putstr(tester[second]);
        second++;
    }


    return (0);
}

