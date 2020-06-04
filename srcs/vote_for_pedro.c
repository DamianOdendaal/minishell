/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vote_for_pedro.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 13:14:41 by dodendaa          #+#    #+#             */
/*   Updated: 2020/06/04 10:10:54 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

/*
**   Vote for pedro is there to help is here to help us bring 
**     the nation together by appending a char to a string then 
**      another string to the end of the first string. Will be useful
**      for making paths more clear and cleaner code
*/

void	vote_for_pedro(char *left_man, char *right_man, char *middle_man, char *another_man)
{
	another_man = ft_strjoin(left_man, middle_man);
	ft_strdel(&left_man);
	left_man = ft_strjoin(another_man, right_man);
	ft_strdel(&another_man);
}
