/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 03:59:03 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:08 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		*ft_calloc(size_t count, size_t size)
{
	void	*element;

	if (!(element = malloc(count * size)))
		return (NULL);
	return (ft_memset(element, '\0', count * size));
}
