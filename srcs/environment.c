/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   environment.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 19:41:31 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/24 15:35:06 by dodendaa         ###   ########.fr       */
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
**      A method to assist us in finding any index inside the env variable,  we 
**      return the index of the env variable if its present otherwise we return
**      0
*/

int        ft_find_index(char **search_me, char *compare_me,  char stop_here)
{
    int     array_index;
    char    *return_string;

    array_index = 0;

    if (search_me == NULL || compare_me == NULL)
        return (FALSE);

    while(search_me[array_index])
    {
        return_string = ft_copy_till(search_me[array_index], stop_here);

        if (ft_strcmp(return_string , compare_me) == 0)
            return (array_index);
            
        return_string = NULL;
        array_index++;
    }
    return (FALSE);
}

/*
**      A method that will allow us to iterate over our 2d
**      array and find a given value. We will return the search
**      string on success and NULL on failure
*/

char     *inside_env(char **env, char *find_me)
{
    int test;
    
    test = ft_look_till(env ,find_me, '=');

    if (test == FALSE)
        find_me = NULL;

    return (find_me);

}

