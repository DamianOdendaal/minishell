/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 21:42:51 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/25 21:02:20 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


//	We need to make sure that if we are in the home directory 
// that the prompt changes to the tildar sign 


static char		*ft_if_home(char *path)
{
	if (!path)
		return (NULL);
	if (get_var(global_env, "HOME", '=') != NULL)
	{
		if (ft_strcmp(path, get_var(global_env, "HOME", '=')) == 0)
			//come back and use something else to return the tildar
			return (ft_strdup("~"));
			
		else if (ft_starts_with(get_var(global_env,"HOME", '='), path))
			return (ft_strdup("~"));
	}
	return (ft_strdup(path));
}

char			*handle_prompt(size_t path_len)
{
	char	*handled_path;
	char	path[path_len + 1];

	getcwd(path, path_len);
	handled_path = ft_if_home(path);

	return (handled_path);
}