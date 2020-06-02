/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_env.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:52:59 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 16:54:11 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"



// what reset is doing is its going into the env var and it is 
// updating that value inside the env var 

// here we return a boolean value based on if we updated the 
// value or not 

int		reset_env(char *key, char *value)
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

			//try and replace this stuff with strcat ,  break code down into 
			// more modular functions 

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
