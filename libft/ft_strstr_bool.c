/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_bool.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/31 13:36:38 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/31 13:39:33 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int        ft_strstr_bool(char *search_me, char *compare_me,  char stop_here)
{
    char    *return_string;


    if (search_me == NULL || compare_me == NULL)
        return (FALSE);

    return_string = ft_copy_till(search_me, stop_here);
    if (ft_strcmp(return_string , compare_me) == 0)
        return (TRUE);
    return (FALSE);
}
