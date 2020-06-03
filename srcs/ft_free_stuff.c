/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stuff.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:19:19 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 16:45:04 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**	After working with all of the resources we are
**	going to need to free the data that we used and
**	the array we used to store the data 
*/ 

void	array_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		ft_strdel(&str[i++]);
	free(str);
}
