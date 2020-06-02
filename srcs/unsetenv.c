/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsetenv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:58:19 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:00:27 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	
*/

int		unset_env(char **cmd)
{
	int		i;
	char	*temp;

	i = 0;
	// too many args 
	if (cmd[1] && cmd[2])
		return (error_params(cmd, 1));

	// not enough args	
	else if (cmd[1] == NULL)
		return (error_params(cmd, -1));

	// what is it known as when we look at the var
	if (cmd[1][0] == '$')
		temp = get_env(cmd[1] + 1);
	
	// if none of the above mentioned cases occur then we take in what you passed 
	else
		temp = ft_strdup(cmd[1]);


	while (global_env[i])
	{
		// see if it makes a difference if we use the strcmp here 
		if (ft_strncmp(global_env[i], temp, ft_strlen(temp)) == 0)
		{
			// create a method that calls all of these methods and does it in one line
			ft_strdel(&global_env[i]);
			free_her(cmd);
			free(temp);
			return (1);
		}
		i++;
	}
	free(temp);
	return (0);
}
