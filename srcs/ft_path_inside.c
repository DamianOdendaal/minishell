/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_inside.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:45:15 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 15:12:39 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**		Here we will handle cases like if we want to be extra and say 
**		cd $HOME or pass a variable that is inside the env var
*/

void	ft_path_inside(char **command_array)
{
	char *temp;
	char *env;

	temp = ft_strsub(command_array[1], 1, ft_strlen(command_array[1]) - 1);
	env = get_env(temp);
	ft_change_path(env);
	free(temp);
	free(env);
}