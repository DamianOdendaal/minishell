/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:06:11 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 09:19:29 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		ft_exec_args(char **command_strings)
{
	int		i;
	char	**args;

	i = 0;
	while (command_strings[i])
	{
		args = ft_get_content(command_strings[i]);

		if (ft_is_builtin(args) == -1)
			return (0);
		else
			i++;
	}
	// free(args);
	return (1);
}