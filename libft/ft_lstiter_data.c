/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_data.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dodendaa <dodendaa@student.wethinkcode.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 12:41:56 by dodendaa          #+#    #+#             */
/*   Updated: 2020/05/18 13:26:02 by dodendaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter_data(t_list *lst, void *data ,void (*f)(t_list *elem,   void *data))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst , data);
			lst = lst->next;
		}
	}
}