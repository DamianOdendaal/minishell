/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_to_string.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 17:13:10 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/31 17:15:49 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_char_to_string(char convert_me)
{
    char *return_string;

    return_string = ft_strnew(1);
    return_string[0] = convert_me;
    return_string[1] = '\0';
    return (return_string);
}