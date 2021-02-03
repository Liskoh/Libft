/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 15:25:35 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:13 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*copied_s;

	i = 0;
	copied_s = (unsigned char *)s;
	while (i < n)
	{
		if (copied_s[i] == (unsigned char)c)
			return ((void *)copied_s + i);
		i++;
	}
	return (NULL);
}
