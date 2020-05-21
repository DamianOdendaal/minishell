/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:41:31 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/21 21:51:57 by dodendaa         ###   ########.fr       */
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
	index = 0;

	while (env[index])
    {
		our_env[index] = env[index];
        index++;
    }
    our_env[index] = NULL;
}



/*
**      A method that will allow us to iterate over our 2d
**      array and find a given value. We will return the search
**      string on success and NULL on failure
*/

#include <stdio.h>
char     *inside_env(char **env, char *find_me)
{
    int test = ft_look_till(env ,find_me, '=');
    // if (ft_look_till(env ,find_me, '=') != TRUE)
    //     return (DODO);
    // return (find_me);
    printf("%d\n", test);
    return (find_me);

}