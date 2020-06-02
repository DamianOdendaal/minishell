/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:29:40 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:10:51 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**		The code behind the famous command that we love to 
**		use on the terminal, The change directory method
*/

int		exec_cd(char **cmd)
{
	char	*dir;
	char	*home;
	char	cwd[1024];

	// here we get the home var
	home = get_env("HOME=");

	// here we check if the command passed in is only the keyword cd
	if (cmd[1] == NULL || (ft_strcmp(cmd[1], "~") == 0))
		exec_path(home);

	
	else if (cmd[1][0] == '$')
		exec_env(cmd);

	else if ((ft_strchr(cmd[1], '~') != NULL) && (ft_strlen(cmd[1]) > 1))
	{
		reset_env("OLDPWD", getcwd(cwd, sizeof(cwd)));
		dir = ft_strjoin(home, ft_strchr(cmd[1], '~') + 1);
		if (chdir(dir) != 0)
			error_found(dir, "cd");
		free(dir);
	}
	else if (ft_strcmp(cmd[1], "-") == 0)
		exec_prev();
		
	else
		exec_path(cmd[1]);
	reset_env("PWD", getcwd(cwd, sizeof(cwd)));
	free_her(cmd);
	free(home);
	return (1);
}
