/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_qoutes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:04:32 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:06:36 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**
*/

char	**remove_quotes(char *str)
{
	int		i;
	char	**ret;

	i = 0;
	while (str[i])
	{
		if (str[i] == '"')
		{
			i++;
			while (str[i] != '"')
				i++;
		}
		if (str[i] == ' ' || str[i] == '\t')
			str[i] = '"';
		i++;
	}
	ret = ft_strsplit(str, '"');
	return (ret);
}
