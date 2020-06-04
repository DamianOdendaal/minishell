/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsetenv.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:58:19 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 17:14:59 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	Unset env is here for people like you to fix mistakes 
**	that you made when setting a variable that you arent actually
**	going to be using 
*/

int		unset_env(char **cmd)
{
	int		i;
	char	*temp;

	i = 0;
	if (cmd[1] && cmd[2])
		return (error_params(cmd, 1));
	else if (cmd[1] == NULL)
		return (error_params(cmd, -1));

	if (cmd[1][0] == '$')
		temp = get_env(cmd[1] + 1);
	else
		temp = ft_strdup(cmd[1]);

	while (global_env[i])
	{
		if (ft_strncmp(global_env[i], temp, ft_strlen(temp)) == 0)
		{
			ft_strdel(&global_env[i]);
			global_env[i] = NULL;
			array_free(cmd);
			free(temp);
			return (1);
		}
		i++;
	}
	free(temp);
	return (0);
}
