/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:04:21 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:12:44 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current;
	t_list *tempo;

	current = *lst;
	if (current == NULL)
		return ;
	while (current != NULL)
	{
		tempo = current->next;
		ft_lstdelone(current, del);
		current = tempo;
	}
	free(tempo);
	*lst = NULL;
}
