/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_exec_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:06:11 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:06:36 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int		execute_args(char **cmds)
{
	int		i;
	char	**args;

	i = 0;
	while (cmds[i])
	{
		args = remove_quotes(cmds[i]);

		if (check_sys(args) == -1)
			return (0);
		else
			i++;
	}
	return (1);
}