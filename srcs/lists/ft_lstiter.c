/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:16:49 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:12:50 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list *current;

	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
