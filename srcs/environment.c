/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:41:31 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/20 20:15:46 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**  A Method used to print the values of the environment variable
*/

void		print_env(char **env)
{
	int		i;

	i = -1;
	while (env[++i])
		ft_putendl(env[i]);
}


/*
**      A method used to store the environment variable in
**      its own array so we can manipulate this as we need to 
**      within the project
*/

void  store_env(char **env, char **our_env)
{
    int		i;

	i = -1;
	while (env[++i])
		our_env[i] = ft_strdupdel(env[i]);
}

/*
**      a method to get the length of the env var to malloc for the size of it 
*/




size_t		env_len(char **env)
{
	size_t		i;

	i = 0;
	while (env[i])
		i++;
    return (i);
}