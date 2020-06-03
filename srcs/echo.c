/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 13:37:22 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 16:45:11 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**		Echo literally does what it says bro
*/

int	ft_echo(char **command_array)
{
	int		i;
	char	*temp;

	i = 1;
	while (command_array[i])
	{
		if (command_array[i][0] == '$')
		{
			temp = get_env(command_array[i] + 1);
			ft_putstr(temp);
			free(temp);
		}
		else
			ft_putstr(command_array[i]);
		if (command_array[i + 1] == NULL)
			ft_putchar('\n');
		else
			ft_putchar(' ');
		i++;
	}
	array_free(command_array);
	return (1);
}
