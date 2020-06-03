/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_forgot_quote.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:21:51 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 13:28:23 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**	Here we are catering for if out of a pair of 2 quotes if only
**	one of the 2 are given then we give you a prompt to close the 
**
*/ 

char	*ft_forgot_quote(char *str, char quote)
{
	char	*ptr;
	char	*pedro;
	char	*incoming_data;

	ptr = str;
	pedro = DODO;
	while ((ptr = ft_strchr(ptr, quote)) != NULL)
	{
		ptr++;
		if ((ptr = ft_strchr(ptr, quote)) == NULL)
		{
			if (quote == '"')
				incoming_data = readline("dquote$> ");
			else
				incoming_data = readline("quote$> ");

			vote_for_pedro(str, incoming_data, "\n", pedro);
			ft_strdel(&incoming_data);
			ptr = str;
		}
		else
			ptr++;
	}
	return (str);
}
