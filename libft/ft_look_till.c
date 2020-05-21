/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_till.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 22:16:20 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/21 21:15:38 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        ft_look_till(char **search_me, char *compare_me,  char stop_here)
{
    int     array_index;
    int     string_index;
    char    *return_string;
    char    **the_strings;

    array_index = 0;
    string_index = 0;

    if (!search_me || !compare_me)
        return (FALSE);
    while(search_me[array_index])
    {
         the_strings = ft_strsplit(search_me[array_index], stop_here);
         while (the_strings[string_index])
         {
             if (the_strings[string_index] == compare_me)
                return (TRUE);
            string_index++;
         }
         array_index++;
    }
    return (FALSE);
}