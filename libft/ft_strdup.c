/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 12:11:14 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/17 19:47:34 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*new;

	i = ft_strlen(str);
	if (i == 0)
		return (ft_strnew(i));
	if (!(new = ft_strnew(i)))
		return (NULL);
	i = -1;
	while (str[++i])
		new[i] = str[i];
	return (new);
}
