/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_copy_till.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 22:17:36 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/21 22:46:47 by dodendaa         ###   ########.fr       */
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
    char *free_me;

    index = 0;
    len = ft_len_till(search_me, stop_here);
    return_me = ft_strndup(search_me, len);
    free(return_me);
    return (return_me);
}