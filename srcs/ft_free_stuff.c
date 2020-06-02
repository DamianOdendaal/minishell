/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stuff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:19:19 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:20:01 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

// change this name here and make it different in the whole project 
void	free_her(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_strdel(&str[i++]);
	free(str);
}
