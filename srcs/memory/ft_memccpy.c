/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:12:47 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:28:33 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*copied_src;
	unsigned char		*copied_dest;

	i = 0;
	copied_src = (unsigned char *)src;
	copied_dest = (unsigned char *)dest;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		copied_dest[i] = copied_src[i];
		if (copied_src[i] == (unsigned char)c)
			return (copied_dest + i + 1);
		i++;
	}
	return (NULL);
}
