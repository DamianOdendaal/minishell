/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:26:00 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 14:10:49 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


int	ft_help_cmd(void)
{
	ft_putendl("\nMinishell builtin methods for you to use: ");
	ft_putendl("Echo , env, setenv, unsetenv, cd, author");
	ft_putendl("Please make sure not to butcher my minishell!\n");
	return (1);
}
