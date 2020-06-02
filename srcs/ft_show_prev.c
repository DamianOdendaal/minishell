/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_prev.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:27:57 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 16:28:44 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	Here we are going to cater for when the - char is passed into 
**	cd and we need to show the directory that we were in before the
**	current dir
*/


// change to show_previous
void	exec_prev(void)
{
	char	*temp;
	char	cwd[1024];
	char	*dir;

	temp = ft_strdup(getcwd(cwd, sizeof(cwd)));
	dir = get_env("OLDPWD");
	
	if (chdir(dir) != 0)
		error_found(dir, "cd");

	reset_env("OLDPWD", temp);
	free(dir);
	free(temp);
}