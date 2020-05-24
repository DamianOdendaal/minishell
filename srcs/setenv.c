/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setenv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 22:16:49 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/24 20:41:09 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


static void		add_var(char *key, char *value)
{
	int		env_index;      
	int		length;           
	char	*key_temp;        
	char	*new_var;       
	char	**temp_env;      

	env_index = 0;
	length = env_len(global_env) + 1;

    if (key == NULL || value == NULL)
        return ;

    store_env(global_env, temp_env);
    env_index = ft_find_index(global_env, value, '=');
    // do checks here to see if find_index was a success

    ft_strcat(key, "=");
    ft_strcat(key, value);

	temp_env[env_index] = ft_strdup(key);

	global_env = temp_env;
}

int    ft_setenv(const char *name, const char *value)
{
    int index;

    index = ft_find_index(global_env, value, '=');
    
    if (index != FALSE)
    {
        ft_strcat(name, "=");
        ft_strcat(name, value);
        free(global_env[index]);
        global_env[index] = ft_strdup(name);
        free(name);
        return (0);
    }
    else if (index == FALSE)
    {
        add_var(name, value);
    }
    return (0);
}



int				set_env_var(char *key, char *value)
{
	int		i;
	char	*key_temp;
	char	*temp;

	i = find_env_index(key);
	if (i != -1)
	{
		key_temp = ft_strjoin(key, "=");
		temp = ft_strjoin(key_temp, value);
		free(key_temp);
		free(g_env[i]);
		g_env[i] = ft_strdup(temp);
		free(temp);
		return (0);
	}
	else if (i == -1)
		temp_env_var(key, value);
	return (0);
}
