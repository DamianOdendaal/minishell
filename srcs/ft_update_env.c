/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_env.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:52:59 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 17:17:57 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"



/*
**	Update env will search through the env variable and 
**	search for a value that exists and update it 
*/

int		update_env(char *key, char *value)
{
	int		i;
	char	*temp;
	char	*temp_key;

	i = 0;
	while (global_env[i])
	{
		if (ft_strncmp(global_env[i], key, ft_strlen(key)) == 0)
		{
			temp_key = ft_strjoin(key, "=");
			temp = ft_strjoin(temp_key, value);
			ft_strdel(&global_env[i]);
			global_env[i] = ft_strdup(temp);
			free(temp_key);
			free(temp);
			return (1);
		}
		i++;
	}
	return (0);
}
