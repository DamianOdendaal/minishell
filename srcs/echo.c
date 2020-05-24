/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*    
                                            +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 00:59:38 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/24 09:27:47 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**      Echo , the builtin that will echo what you put in back out to the
**      stdout
*/

int     ft_echo(char **command_arr)
{
    size_t length;
    size_t index;

    length = env_len(command_arr);
    // if no args came after echo
    if (length == 1)
        ft_putendl("");
    index = 0;
    while (++index < length)
        ft_putstr(command_arr[index]);
}