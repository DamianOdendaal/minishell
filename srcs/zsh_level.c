/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zsh_level.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:22:39 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:22:53 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	 When you run a command in a shell, it runs at the shell level. Within a shell, 
**	 you can open another shell, which makes it a subshell of the shell that opened it.
**	 Therefore, the parent shell is considered the level 1 shell,
**	 and the child shell is a level 2 shell.
*/


void	zsh_level(void)
{
	char		*temp;
	char		*lvl;
	int 		level;

	temp = get_env("SHLVL");
	level = ft_atoi(temp) + 1;
	lvl = ft_itoa(level);

	reset_env("SHLVL", lvl);
	free(temp);
	free(lvl);
}
