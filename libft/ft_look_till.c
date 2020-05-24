/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_look_till.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 22:16:20 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/23 23:47:43 by dodendaa         ###   ########.fr       */
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

    while(search_me[array_index])
    {
        return_string = ft_copy_till(search_me[array_index], stop_here);
        if (ft_strcmp(return_string , compare_me) == 0)
            return (TRUE);
        return_string = NULL;
        array_index++;
    }
    return (FALSE);
}

        // 3.) unsetenv
        // 4.) finally get to the cool prompt



        // use copy till to get the index we want in the env then append the = to it 
        // from there when we have that we can return the index in the env that we are looking for
        // when we have that we can then move forward with checking if the index exists or not
        // if not we set the variable into the env
        // else?