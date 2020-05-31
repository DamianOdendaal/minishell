/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_execution.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 20:55:50 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/25 21:02:20 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"



static int		command_execution(char **coms)
{
	int		i;
	int		ret;
	char	**com;

	i = 0;
	while (coms[i])
	{
		// come back and replace arg split 
		com = argsplit(ft_strdup(coms[i]));
		// what does handle input do
		handle_input(com);
		// where do we allocate memory in this method?
		
		ret = exec_command(com);
		ft_freestrarray(com);
		if (ret == -1)
		{
			ft_freestrarray(coms);
			return (-1);
		}
		i++;
	}
	ft_freestrarray(coms);
	return (0);
}