/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbuiltin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:03:04 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 16:50:17 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	Only one person is allowed to be a dodo so this 
**	method makes sure that you are not a dodo by entering 
**	your own made up things
*/


int		ft_is_builtin(char **command_array)
{
	if (ft_strequ(command_array[0], "exit"))
		return (-1);

	else if (ft_strequ(command_array[0], "cd"))
		return (ft_cd(command_array));

	else if (ft_strequ(command_array[0], "setenv"))
		return (set_env(command_array));

	else if (ft_strequ(command_array[0], "echo"))
		return (ft_echo(command_array));
		
	else if (ft_strequ(command_array[0], "env"))
		return (print_env(command_array));

	else if (ft_strequ(command_array[0], "unsetenv"))
		return (unset_env(command_array));

	else if (ft_strequ(command_array[0], "help"))
		return (ft_help_cmd());

	else if (ft_strequ(command_array[0], "author"))
		return (ft_authors());

	else if (command_array[0][0] == '~')
		return (ft_handle_tildar(command_array));

	else if (system_command(command_array) == 1)
		return (1);
	return (0);
}
