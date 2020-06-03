/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_env.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:53:46 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 16:44:41 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"



// print env 
int		print_env(char **cmd)
{
	int i;

	i = 0;
	while (global_env[i])
	{
		ft_putendl(global_env[i]);
		i++;
	}
	array_free(cmd);
	return (1);
}

