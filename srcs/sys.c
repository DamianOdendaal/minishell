/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 08:57:50 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 20:31:36 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**	system commands are the commands that our minishell runs
**	but these were not part of the builtins that we needed to 
**	recreate , such as ls and other builtins that were not 
**	part of the project scope
*/

int		system_command(char **cmd)
{
	struct stat	info;
	char		*path;

	path = get_path(cmd[0]);

	if (path != NULL && cmd[0][0] != '~' && cmd[0][0] != '.')
		return (sys_call(cmd, path));
		
	if (lstat(cmd[0], &info) != -1)
		if (S_ISREG(info.st_mode))
		{
			ft_strdel(&path);
			path = ft_strdup(cmd[0]);
			return (sys_call(cmd, path));
		}
	ft_3t_printer(NOFOUND, cmd[0], "\n");

	if (cmd)
		array_free(cmd);
	ft_strdel(&path);
	return (0);
	
}
