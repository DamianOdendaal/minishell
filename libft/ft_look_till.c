/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_till.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 22:16:20 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/21 22:50:28 by dodendaa         ###   ########.fr       */
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

    if (search_me == NULL || compare_me == NULL)
        return (FALSE);


        // cool now that you have copy till working you can 

        1.)  call the method and run the comparison in this method and then 
        2.) setenv
        3.) unsetenv
        4.) finally get to the cool prompt

    while(search_me[array_index])
    {
      
         array_index++;
    }
    return (FALSE);
}