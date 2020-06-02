/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sys_call.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:16:54 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:17:44 by dodendaa         ###   ########.fr       */
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
	// test to see if the code works the same if you make it pid == 0
	if (!pid)
	{
		if (execve(path, cmd, global_env) == -1)
		{
			// come back here and swap the text for constants that are defined 
			ft_putstr("minishell: permission denied: ");
			ft_putendl(path);
			exit(-1);
		}
	}

	else if (pid < 0)
	{
			// come back here and swap the text for constants that are defined 

		ft_putstr("minishell: unable to fork process:");
		ft_putnbr(pid);
		ft_putchar('\n');
	}
	
	else
		wait(&pid);

	ft_strdel(&path);
	free_her(cmd);
	return (1);
}