/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_3t_printer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 19:11:15 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/09 10:01:20 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void    ft_3t_printer(char *first, char *second, char *third)
{
    if (first == NULL || second == NULL || third == NULL)
    {
        return ;
    }
    ft_putstr(first);
    ft_putstr(second);
    ft_putstr(third);
}
