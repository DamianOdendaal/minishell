/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 08:52:50 by dodendaa           #+#    #+#             */
/*   Updated: 2020/06/02 08:52:47 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**	Our method here will help us insert a new value into our
**	env variable if we could not update an existing variable 
** 	that was inside the env var 
*/


// change to insert var
int		preform_set(char **temp, char **cmd)
{
	char	*temp_key;
	char	*temp_rule;
	int		i;


	// just call store env here for the next 3 lines 
	i = -1;
	while (global_env[++i])
		temp[i] = ft_strdup(global_env[i]);
	free_her(global_env);

	// here we are creating the value that we are going to insert into the 
	// new env 

	// create a method that takes in 2 strings and a char and appends 
	// the char to the first string then the second string to the first string 
	temp_key = ft_strjoin(cmd[1], "=");
	temp_rule = ft_strjoin(temp_key, cmd[2]);
	
	free(temp_key);
	free_her(cmd);
	// try to avoid strdup here 
	temp[i] = ft_strdup(temp_rule);
	free(temp_rule);

	global_env = temp;
	return (1);
}
