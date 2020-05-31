/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_path_var.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 21:25:51 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/27 17:59:31 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int        ft_find(char *search_me, char *compare_me,  char stop_here)
{
    int     string_index;
    char    *check_string;

    string_index = 0;

    if (compare_me == NULL)
        return (FALSE);
    
    check_string = ft_copy_till(search_me, stop_here);
    if (ft_strcmp(check_string, compare_me) == 0)
        return (TRUE);

    return (FALSE);
}


char	*find_path_var(char **command_string)
{
	int				index;
	char			**binary_var;
	char			*path;
	struct stat		info;

	index = -1;
	binary_var = NULL;
	binary_var = ft_strsplit(get_var(global_env, "PATH", '='), ':');
	while (binary_var != NULL && binary_var[++index])
	{

		if (ft_find(binary_var[index], command_string[0], '='))
			path = ft_strdup(command_string[0]);
		else
            path = ft_append(binary_var[index], command_string[0]);
		if (lstat(path, &info) == -1)
			free(path);
		else
		{
			ft_freestrarray(binary_var);
			return (path);
		}
	}
	if (binary_var != NULL)
		ft_freestrarray(binary_var);

	return (NULL);
}