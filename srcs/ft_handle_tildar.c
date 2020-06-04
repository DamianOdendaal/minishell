/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_tildar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:35:36 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 11:29:29 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**		Handle tilar is here so that we can change the 
**		prompt path to the tildar sign when we are in the 
**		home dir
*/ 

int		ft_handle_tildar(char **command_array)
{
	char	*home;
	char	*temp;
	char	*path;

	home = get_env("HOME=");

	if (ft_strlen(command_array[0]) > 1)
	{
		temp = ft_strsub(command_array[0], 1, ft_strlen(command_array[0]) - 1);
		path = ft_strjoin(home, temp);

		free(temp);
		free(home);
		ft_change_path(path);
		free(path);
		array_free(command_array);
		return (1);
	}
	else
	{
		ft_change_path(home);
		free(home);
		array_free(command_array);
		return (1);
	}
	return (0);
}
