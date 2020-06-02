/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_tildar.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:35:36 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:10:51 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


// doc string here 

int		exec_tilda(char **cmd)
{
	char	*home;
	char	*temp;
	char	*path;

	home = get_env("HOME=");

	if (ft_strlen(cmd[0]) > 1)
	{
		// here we get the path within the command and append it to the home var
		// so that we can have the whole path var for when tildar is needed to be displayed
		temp = ft_strsub(cmd[0], 1, ft_strlen(cmd[0]) - 1);
		path = ft_strjoin(home, temp);

		free(temp);
		free(home);
		exec_path(path);
		free(path);
		free_her(cmd);
		return (1);
	}
	else
	{
		exec_path(home);
		free(home);
		free_her(cmd);
		return (1);
	}
	return (0);
}
