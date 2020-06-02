/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 13:37:22 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:00:27 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**		Echo literally does what it says bro
*/

int	exec_echo(char **cmd)
{
	int		i;
	char	*temp;

	i = 1;
	while (cmd[i])
	{
		if (cmd[i][0] == '$')
		{
			temp = get_env(cmd[i] + 1);
			ft_putstr(temp);
			free(temp);
		}
		else
			ft_putstr(cmd[i]);
		if (cmd[i + 1] == NULL)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
	free_her(cmd);
	return (1);
}
