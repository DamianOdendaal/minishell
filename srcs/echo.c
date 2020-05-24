/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 00:59:38 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/24 09:27:47 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"


/*
**      Echo , the builtin that will echo what you put in back out to the
**      stdout
*/

int     ft_echo(char **commander_pedro)
{
    size_t length;

    length = env_len(commander_pedro);
    
}