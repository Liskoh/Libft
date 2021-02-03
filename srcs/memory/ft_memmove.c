/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:13:17 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:22 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*copied_dest;
	char		*copied_src;

	if (!dest && !src)
		return (NULL);
	i = 0;
	copied_dest = (char *)dest;
	copied_src = (char *)src;
	if (dest < src)
		ft_memcpy(copied_dest, copied_src, n);
	else
	{
		i = n;
		while (i-- > 0)
			copied_dest[i] = copied_src[i];
	}
	return (dest);
}
