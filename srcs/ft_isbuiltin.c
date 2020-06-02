/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbuiltin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:03:04 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:06:36 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	Only one person is allowed to be a dodo so this 
**	method makes sure that you are not a dodo by entering 
**	your own made up things
*/


int		check_sys(char **cmd)
{
	if (ft_strequ(cmd[0], "exit"))
		return (-1);

	else if (ft_strequ(cmd[0], "cd"))
		return (exec_cd(cmd));

	else if (ft_strequ(cmd[0], "env"))
		return (print_env(cmd));

	else if (ft_strequ(cmd[0], "setenv"))
		return (set_env(cmd));

	else if (ft_strequ(cmd[0], "unsetenv"))
		return (unset_env(cmd));

	else if (ft_strequ(cmd[0], "echo"))
		return (exec_echo(cmd));

	else if (ft_strequ(cmd[0], "help"))
		return (exec_help());

	else if (ft_strequ(cmd[0], "author"))
		return (exec_author());

	else if (cmd[0][0] == '~')
		return (exec_tilda(cmd));

	else if (exec_sys(cmd) == 1)
		return (1);
	return (0);
}
