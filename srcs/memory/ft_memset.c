/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 07:49:08 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:24 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		*ft_memset(void *ptr, int value, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = value;
		i++;
	}
	return ((void *)ptr);
}
