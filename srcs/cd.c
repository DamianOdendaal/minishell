/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:29:40 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 17:17:31 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**		The code behind the famous command that we love to 
**		use on the terminal, The change directory method
*/

int		ft_cd(char **cmd)
{
	char	*dir;
	char	*home;
	char	cwd[1024];

	home = get_env("HOME=");

	if (cmd[1] == NULL || (ft_strcmp(cmd[1], "~") == 0))
		ft_change_path(home);

	
	else if (cmd[1][0] == '$')
		ft_path_inside(cmd);

	else if ((ft_strchr(cmd[1], '~') != NULL) && (ft_strlen(cmd[1]) > 1))
	{
		update_env("OLDPWD", getcwd(cwd, sizeof(cwd)));
		dir = ft_strjoin(home, ft_strchr(cmd[1], '~') + 1);
		if (chdir(dir) != 0)
			error_found(dir, "cd");
		free(dir);
	}
	// come back here and add to go to home if we make it --
	else if (ft_strcmp(cmd[1], "-") == 0)
		exec_prev();
		
	else
		ft_change_path(cmd[1]);
	update_env("PWD", getcwd(cwd, sizeof(cwd)));
	array_free(cmd);
	free(home);
	return (1);
}
