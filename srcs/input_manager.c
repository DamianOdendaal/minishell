/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 20:57:26 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/25 21:02:20 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"



/*
**	Input manager is the method that helps us check if data was inserted
**	correctly into our minishell,  if input is given correctly we return 
**	data that was put in. Otherwise a you get 
*/

char			*input_manager(char *str)
{
	char	*second_str;
	char	*ptr;

	ptr = str;
	while ((ptr = ft_strchr(ptr, '"')) != NULL)
	{
		++ptr;
		if ((ptr = ft_strchr(ptr, '"')) == NULL)
		{
			second_str = readline("dquote $>");
			
			if (ft_last_index(second_str, '"') == 0)
				second_str = readline("dquote $>");

			ft_strcat(str, "\n");
			ft_strcat(str, second_str);
			ptr = str;
		}
		else
			ptr++;
	}
	return (str);
}
