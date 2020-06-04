/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:52:50 by dodendaa           #+#    #+#             */
/*   Updated: 2020/06/02 08:52:47 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**	Our method here will help us insert a new value into our
**	env variable if we could not update an existing variable 
** 	that was inside the env var 
*/

int		ft_insert_var(char **temp, char **cmd)
{
	char	*temp_key;
	char	*temp_rule;
	int		i;
	i = -1;
	while (global_env[++i])
		temp[i] = ft_strdup(global_env[i]);
	array_free(global_env);

	temp_key = ft_strjoin(cmd[1], "=");
	temp_rule = ft_strjoin(temp_key, cmd[2]);
	
	free(temp_key);
	array_free(cmd);
	temp[i] = ft_strdup(temp_rule);
	free(temp_rule);

	global_env = temp;
	return (1);
}
