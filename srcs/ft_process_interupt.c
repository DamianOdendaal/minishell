/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_process_interupt.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 17:09:06 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/02 17:10:51 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

void	handle_sigint(int sig)
{
	if (sig == SIGINT)
	{
		ft_putchar('\n');
		signal(SIGINT, handle_sigint);
		print_path();
	}
}