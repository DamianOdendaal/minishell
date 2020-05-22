/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 23:26:56 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/22 23:40:18 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

static int		unset_env_var(char *key)
{
	int		i;
	int		j;
	size_t		len;
	char	*key_temp;
	char	**new_env;

	i = 0;
	j = 0;
	len = env_len(global_env) - 1;
	key_temp = ft_strjoin(key, "=");
	new_env = (char **)malloc(sizeof(char *) * (len + 1));
	new_env[len] = 0;
	while (i < len && global_env[j])
	{
		if (!ft_starts_with(key_temp, global_env[j]))
		{
			new_env[i] = ft_strdup(global_env[j]);
			i++;
		}
		j++;
	}
	free(key_temp);
	ft_freestrarray(g_env);
	g_env = new_env;
	return (0);
}