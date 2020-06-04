/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fetch_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:14:08 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 20:34:19 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**		Get path is a method that is going to help us 
**		get the binary as a path so that we can us it 
**		in our minishell. An example would be /usr/bin/ls as ls
*/

char	*get_path(char *com)
{
	int			i;
	char		*temp;
	char		**bin;
	char		*path;
	struct stat	info;

	i = -1;

	temp = get_env("PATH=");
	bin = ft_strsplit(temp, ':');
	ft_strdel(&temp);
	
	while (bin && bin[++i])
	{
		path = get_bin(bin[i], com);
		if (lstat(path, &info) == -1)
			free(path);
		else
		{
			array_free(bin);
			return (path);
		}
	}
	if (bin != NULL)
		array_free(bin);
	return (NULL);
}