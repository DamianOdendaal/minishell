/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 16:26:00 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 16:26:30 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


int	exec_help(void)
{
	
	ft_putendl("Minishell builtin methods for you to use:");
	ft_putendl("Echo , env, setenv, unsetenv, cd");
	ft_putendl("Please make sure not to butcher my minishell!");
	return (1);
}
