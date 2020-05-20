/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/19 21:42:51 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/20 19:45:33 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	shell_exit(void)
{
	// when this method is called we need to make sure we have freed everything first
	ft_putchar('\n');
	exit(0);
}