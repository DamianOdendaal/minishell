/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 08:35:18 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 17:09:06 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	error_found(char *path, char *cmd)
{
	struct stat	sb;

	stat(path, &sb);
	if (S_ISREG(sb.st_mode))
	{
		ft_3t_printer(cmd, ": not a directory: ", path);
		ft_putchar('\n');
	}
	else
	{
		ft_3t_printer(cmd, ": no such file or directory: ", path);
		ft_putchar('\n');
	}
}

int		error_params(char **cmd, int i)
{
	if (i < 0)
	{
		ft_3t_printer(cmd[0], ": to few arguments", "\n");
	}

	else
	{
		ft_3t_printer(cmd[0], ": to many arguments", "\n");
	}

	array_free(cmd);
	return (0);
}
