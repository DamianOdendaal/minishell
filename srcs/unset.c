/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 23:26:56 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/24 00:31:27 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**      The exists within method is here to assist us for the 
**      unset_env method to see if there is an index present in
**      the env var
*/

int     exists_within(char *find_me, char *search_me)
{
    char *insider;

    insider = ft_copy_till(search_me, '=');
    if (find_me == insider)
        return (TRUE);
    return (FALSE);
    
}

/*
**  The unset env is a builtin method that we re implement , this will
**  look for a set value in the 2d array and it will remove it ,  it the
**  string we are looking for is not set then we z
*/

static int		unset_env(char *key)
{
	int		temp_index;
	int		genv_index;
	size_t		length;
	// char	*key_temp;
	char	**temp_env;

    if (key == "PWD")
    {
        ft_putendl("Dodo says no");
        return (0);
    }
        
	temp_index = 0;
	genv_index = 0;
	length = env_len(global_env);
	// key_temp = ft_strjoin(key, "=");
    ft_strcat(key, "=");
    
	temp_env = (char **)malloc(sizeof(char *) * (length));
	temp_env[length] = 0;


	while (temp_index < length && global_env[genv_index])
	{
        // here we are going to look while look_till is not true 
		if (exists_within(key, global_env[genv_index]) == FALSE)
		{
			temp_env[temp_index] = global_env[genv_index];
			temp_index++;
		}
		genv_index++;
	}
	// free(key_temp);
	// ft_freestrarray(global_env);
	global_env = temp_env;
	return (0);
}