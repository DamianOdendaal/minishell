/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forgot_quote.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:21:51 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:22:28 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**	Here we are catering for if out of a pair of 2 quotes if only
**	one of the 2 are given then we give you a prompt to close the 
**
*/ 

char	*end_quote(char *str, char q)
{
	char	*ptr;
	char	*temp;
	char	*str2;

	ptr = str;
	while ((ptr = ft_strchr(ptr, q)) != NULL)
	{
		ptr++;
		if ((ptr = ft_strchr(ptr, q)) == NULL)
		{
			if (q == '"')
				str2 = readline("\033[1;35mdquote$> \033[0m");
			else
				str2 = readline("\033[1;35mquote$> \033[0m");
			temp = ft_strjoin(str, "\n");
			ft_strdel(&str);
			str = ft_strjoin(temp, str2);
			ft_strdel(&str2);
			ft_strdel(&temp);
			ptr = str;
		}
		else
			ptr++;
	}
	return (str);
}
