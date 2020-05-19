/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charcasecmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:58:35 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/14 20:40:01 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_charcasecmp(const char char1, const char char2)
{
	if (ft_tolower((unsigned char)char1) - ft_tolower((unsigned char)char2) > 0)
		return (1);
	else if (ft_tolower((unsigned char)char1) - ft_tolower((unsigned char)char2) < 0)
		return (-1);
	else
		return (0);
}   