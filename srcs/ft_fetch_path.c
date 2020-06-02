/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fetch_path.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:14:08 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:15:40 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

char	*get_path(char *com)
{
	// come here and try to take out some of the params here 
	int			i;
	char		*temp;
	char		**bin;
	char		*path;
	struct stat	info;

	i = -1;
	// try to change the logic for the get_env method 
	
	temp = get_env("PATH=");
	bin = ft_strsplit(temp, ':');
	ft_strdel(&temp);
	while (bin && bin[++i])
	{

		// come back here with an understanding on how this do path
		//method works 

		path = do_path(bin[i], com);
		if (lstat(path, &info) == -1)
			free(path);
		else
		{
			free_her(bin);
			return (path);
		}
	}
	if (bin != NULL)
		free_her(bin);
	return (NULL);
}
