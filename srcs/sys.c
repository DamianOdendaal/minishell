/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sys.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 08:57:50 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:18:28 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**	
*/

int		exec_sys(char **cmd)
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
		
	ft_putstr("minishell: command not found: ");
	ft_putendl(cmd[0]);

	if (cmd)
		free_her(cmd);
	ft_strdel(&path);
	return (0);
	
}
