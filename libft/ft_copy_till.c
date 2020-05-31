/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_till.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 22:17:36 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/25 21:45:51 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


/*
**      actually duplicate till but you got bamboozled
*/

char    *ft_copy_till(char *search_me, char stop_here)
{
    size_t len; 
    char *return_me;

    if (search_me == NULL || !stop_here)
        return (NULL);

    len = ft_len_till(search_me, stop_here);

    if (len <= 0)
        return (NULL);
        
    return_me  = (char *)malloc(sizeof(char) * len + 1);
    ft_strncpy(return_me, search_me, len);
    return (return_me);
}