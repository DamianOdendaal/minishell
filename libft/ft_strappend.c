/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 16:50:06 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/03 01:27:35 by groovyswa        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strappend(char *s1, const char c)
{
//	int i;
    char *return_string;
    char *convert;

    convert = ft_char_to_string(c);
    return_string = ft_strcat(s1, convert);
    free(convert);
    return (return_string);
}


