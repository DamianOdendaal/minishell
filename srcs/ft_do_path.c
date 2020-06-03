/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:12:51 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 17:33:11 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**		the goal of the below method is so that we can 
**		get the binary that we are looking for as a path
**		an example as /usr/bin/ls,  here we make sure that the
**		binary exists within the command string 
**		
*/

char	*get_bin(char *binary, char *command)
{
	char	*temp;
	char	*path;
	
	if (ft_strstr(binary, command) != NULL)
		path = ft_strdup(command);

	else
	{
		temp = ft_strjoin(binary, "/");
		path = ft_strjoin(temp, command);
		free(temp);
	}
	return (path);
}
