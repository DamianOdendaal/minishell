/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isbuiltin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:03:04 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 16:22:20 by dodendaa         ###   ########.fr       */
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
	// make another command for printing a header 
	if (ft_strequ(command_array[0], CLOSE))
		return (-1);

	else if (ft_strequ(command_array[0], LMAO))
		return (draw_header());

	else if (ft_strequ(command_array[0], OUTOFHERE))
		return (ft_cd(command_array));

	else if (ft_strequ(command_array[0], TAKEHERE))
		return (set_env(command_array));

	else if (ft_strequ(command_array[0], ECHO))
		return (ft_echo(command_array));
		
	else if (ft_strequ(command_array[0], ENV))
		return (print_env(command_array));

	else if (ft_strequ(command_array[0], GIMMIE))
		return (unset_env(command_array));

	else if (ft_strequ(command_array[0], TASUKETE))
		return (ft_help_cmd());

	else if (ft_strequ(command_array[0], DABRUS))
		return (ft_authors());

	else if (command_array[0][0] == '~')
		return (ft_handle_tildar(command_array));

	else if (system_command(command_array) == 1)
		return (1);
	return (0);
}
