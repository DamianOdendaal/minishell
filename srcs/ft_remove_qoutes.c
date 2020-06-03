/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remove_qoutes.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:04:32 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 13:47:38 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	This method will assist us in getting the content that is
**	inside quotes, it will find any word and occurence of whitespace
**	will replace the white spaces with quotes so that in the end 
**	any quotes that were already there and newly added ones will 
**	be removed with string split and we will have only the content itself
*/

char	**ft_get_content(char *str)
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
