/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_till.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 22:16:20 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/20 23:03:00 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        ft_look_till(char *search_me, char *compare_me,  char stop_here)
{
    int     index;
    char    *return_string;

    index = -1;

    if (!search_me || !compare_me)
        return (FALSE);

    while(search_me[++index])
    {
        if (search_me[index] == stop_here)
            break;
        return_string[index] = search_me[index];

    }
    return_string[index] = '\0';
    if (ft_strcmp(return_string, compare_me) == 0)
        return (TRUE);

    return (FALSE);
}