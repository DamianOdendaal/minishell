/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_index.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 16:30:57 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 16:52:16 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int   ft_strchr_index(const char *s, int c)
{
	char	a;
	int	    len;
 

	a = (char)c;
	len = ft_strlen(s);
  

	if (s[len] == a)
		return (len);

	while (len)
	{
		if (s[len - 1] == a)
			return (len - 1);
		len--;
	}
	return (0);
}