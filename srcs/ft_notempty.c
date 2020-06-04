#include "../includes/minishell.h"

/*
** Simple little function to check whether the user input contains anything
** other than spaces and tabulations. Just incase they try to pull a sneaky
** on ya !
*/

int 	ft_notempty(char *str)
{
	char 	*tmp;
	int 	index;

	tmp = str;
	index = -1;
	while (tmp[++index])
	{
		if (tmp[index] == 32 || tmp[index] == 9)
			continue;
		if (tmp[index] != 32 && tmp[index] != 9)
			return (1);
	}
	return (0);
}
