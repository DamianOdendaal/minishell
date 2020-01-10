/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 14:56:11 by marvin            #+#    #+#             */
/*   Updated: 2020/01/10 14:56:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

// function to split the argument given into seperate words(2d array)

char    **argument_split(char *arg)
{
    char **ret_val = ft_strsplit(arg);
    // remember to free
    return (ret_val);
}

// function to check if a specific argument is present in an array

int     argument_position(char **arg, char *to_find)        
{
    int index;
    int array_length;
    int tmp;

    index = -1;
    array_length = 0;

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