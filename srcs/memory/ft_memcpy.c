/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:16:37 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:19 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*copied_src;
	char		*copied_dest;

	i = 0;
	copied_src = (char *)src;
	copied_dest = (char *)dest;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		copied_dest[i] = copied_src[i];
		i++;
	}
	return (copied_dest);
}
