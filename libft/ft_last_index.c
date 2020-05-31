/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_last_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/25 19:16:47 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/25 19:24:10 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

int    ft_last_index(char *str, char compare_me)
{
    size_t index;

    index = 0;
    while (str[index] != '\0')
        index++;
    index -= 1;
    if (str[index] == compare_me)
        return (1);
    return (0);
}