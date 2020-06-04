/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:30:57 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 16:32:11 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strchr_index(const char *s, int c)
{
	int		i = 0;
	char	*str;

	str = (char *)s;
	while (str[i])
	{
		if (str[i] == (char)c)
			return (i);
		i++;
	}
	if (c == '\0')
		return (0);
	return (0);
}
