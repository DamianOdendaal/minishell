/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sys_call.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:16:54 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 17:11:38 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	 The method we have here is to assist us in running system 
**	calls which will help us in the system execute method 
**
*/

int		sys_call(char **cmd, char *path)
{
	pid_t		pid;

	signal(SIGINT, proc_signal_handler);
	pid = fork();
	if (!pid)
	{
		if (execve(path, cmd, global_env) == -1)
		{
			ft_3t_printer(NOPERM, path, "\n");
			exit(-1);
		}
	}
	else if (pid < 0)
	{
		ft_putstr(CANTFORK);
		ft_putnbr(pid);
		ft_putchar('\n');
	}
	else
		wait(&pid);
	ft_strdel(&path);
	array_free(cmd);
	return (1);
}