/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_path_inside.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:45:15 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 16:45:39 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**		Here we will handle cases like if we want to be extra and say 
**		cd $HOME or pass a variable that is inside the env var
*/

// change to path_inside
void	exec_env(char **cmd)
{
	char *temp;
	char *env;

	temp = ft_strsub(cmd[1], 1, ft_strlen(cmd[1]) - 1);
	env = get_env(temp);
	exec_path(env);
	free(temp);
	free(env);
}