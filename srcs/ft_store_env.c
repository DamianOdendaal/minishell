/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_store_env.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:39:36 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 16:48:15 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


//store env 
void	pop_env(char **env)
{
	int i;

	i = 0;
	while (env[i])
		i++;

	global_env = (char **)malloc((sizeof(char *) * (i + 1)));
	i = 0;
	while (env[i])
	{
		global_env[i] = ft_strdup(env[i]);
		i++;
	}
}
