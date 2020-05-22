/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_till.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 22:17:36 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/23 01:55:54 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
**      actually duplicate till but you got bamboozled
*/

char    *ft_copy_till(char *search_me, char stop_here)
{
    int index;
    size_t len; 
    char *return_me;

    index = 0;
    len = ft_len_till(search_me, stop_here);
    ft_strncpy(return_me, search_me, len);
    return (return_me);
}