/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 08:35:18 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:01:53 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	error_found(char *path, char *cmd)
{
	struct stat	sb;

	stat(path, &sb);
	if (S_ISREG(sb.st_mode))
	{
		//here we are going to call the 3t_printer

		ft_putstr(cmd);
		ft_putstr(": not a directory: ");
		ft_putendl(path);
	}
	else
	{
		//here we are going to call the 3t_printer
		ft_putstr(cmd);
		ft_putstr(": no such file or directory: ");
		ft_putendl(path);
	}
}

int		error_params(char **cmd, int i)
{
	if (i < 0)
	{
		// call 3t_printer here with the last parameter as the newline 
		ft_putstr(cmd[0]);
		ft_putendl(": to few arguments");
	}

	else
	{
		// call 3t_printer here with the last parameter as the newline 

		ft_putstr(cmd[0]);
		ft_putendl(": to many arguments");
	}

	free_her(cmd);
	return (0);
}
