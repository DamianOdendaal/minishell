/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zsh_level.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 20:56:39 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/25 21:02:20 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	 When you run a command in a shell, it runs at the shell level. Within a shell, 
**	 you can open another shell, which makes it a subshell of the shell that opened it.
**	 Therefore, the parent shell is considered the level 1 shell,
**	 and the child shell is a level 2 shell.
*/

void			zsh_level(void)
{
	char		*temp;
	char		*lvl;

	temp = get_var(global_env, "SHLVL", '=');
	lvl = ft_itoa(ft_atoi(temp) + 1);
	ft_setenv("SHLVL", lvl);
	free(temp);
	free(lvl);
}
