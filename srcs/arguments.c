/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:11 by marvin            #+#    #+#             */
/*   Updated: 2020/05/21 20:55:42 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


char    **argument_split(char *arg, char delim)
{
    char **ret_val;
    
    ret_val = ft_strsplit(arg, delim);
    // free(arg);
    return (ret_val);
}


int     argument_position(char **arg, char *to_find)        
{
    int index;
    int array_length;
    int tmp;

    index = -1;
    array_length = 0;
    tmp = 0;
    

    while (arg[tmp])            // test to see if the array lenght is fine
        tmp++;
    array_length = tmp;

    while (++index < array_length)
    {
        if (arg[index] == to_find)
            return (1);
    }
    return (0);
}