/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:41:31 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/20 22:02:39 by dodendaa         ###   ########.fr       */
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

/*
**      A method used to store the environment variable in
**      its own array so we can manipulate this as we need to 
**      within the project
*/

void  store_env(char **env, char **our_env)
{
    int		index;
	index = -1;

	while (env[++index])
		our_env[index] = env[index];
    our_env[index] = NULL;
}



/*
**      A method that will allow us to iterate over our 2d
**      array and find a given value. We will return a boolean value
**      0 on failure and 1 on success
*/


int     inside_env(char **env, char *find_me)
{
    int index;
    

    index = -1;



    while (env[++index])
        if (env[index] == find_me)
            return (1);
    return (0);
}



// create the following methods , 

// one that iterates over a 2d array and looks for a specific index within it (this is get env)