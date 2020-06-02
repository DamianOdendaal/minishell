/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:12:51 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:15:39 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**		the goal of the below method is so that we can 
*/

char	*do_path(char *bin, char *com)
{
	char	*temp;
	char	*path;

	//if we dont find the comm inside the binary string 
	if (ft_strstr(bin, com) != NULL)
		path = ft_strdup(com);

	// if we do find the command inside the binary string
	else
	{
		// try to use strcat here and not the str joins,
		// make a method that takes in the 
		temp = ft_strjoin(bin, "/");
		path = ft_strjoin(temp, com);
		free(temp);
	}
	return (path);
}
