/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_till.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 22:21:03 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/21 22:24:54 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t     ft_len_till(char *search_me, char stop_here)
{
    size_t index;

    index = 0;
    while (search_me[index])
    {
        if (search_me[index] == stop_here)
            break;
        index++;
    }
    return (index);
}