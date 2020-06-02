/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:49:29 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:15:37 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	Here we will be handling the path that needs to be 
**	printed back out,  we need to make sure if its the 
**	home or the root then we can check what the path needs 
**	to be if its niether of the two
*/

void	print_path(void)
{
	char	cwd[1024];
	char	*ptr;
	char	*home;

	home = get_env("HOME=");

	if (getcwd(cwd, sizeof(cwd)) != NULL)
	{
		if (ft_strcmp(cwd, "/") == 0)
			ft_putchar('/');
		else if (ft_strcmp(cwd, home) == 0)
			ft_putstr("~/");
		else
		{
			// do i need to use str sub here?
			ptr = ft_strsub(cwd, ft_strlen(home), ft_strlen(cwd));
			ft_putchar('~');
			ft_putstr(ptr);
			free(ptr);
		}
	}
	free(home);
}