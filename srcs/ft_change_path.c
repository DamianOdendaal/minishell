/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_path.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:29:57 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 16:30:11 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"



/*
**  Here we are going to be updating the present working 
**	directory when we change to another dir so we can 
** 	be aware of where we are now and where we were before
**	we are now then we change the directory
*/


//change to change path
void	exec_path(char *path)
{
	char	cwd[1024];

	reset_env("OLDPWD", getcwd(cwd, sizeof(cwd)));

	if (chdir(path) != 0)
		error_found(path, "cd");
}