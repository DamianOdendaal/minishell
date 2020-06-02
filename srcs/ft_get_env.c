/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_env.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:21:07 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:21:34 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"



/*
**	This is a method that will make looking though the env 
**	variable for a specific key a lot easier later in the project
*/

char	*get_env(char *str)
{
	int	i;

	i = 0;
	while (global_env[i])
	{
		if (ft_strncmp(str, global_env[i], ft_strlen(str)) == 0)
			return (ft_strdup(ft_strchr(global_env[i], '=') + 1));
		i++;
	}
	return (NULL);
}
