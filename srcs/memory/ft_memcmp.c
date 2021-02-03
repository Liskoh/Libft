/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:14:03 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:16 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int			ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*copied_s1;
	unsigned char		*copied_s2;

	i = 0;
	copied_s1 = (unsigned char *)s1;
	copied_s2 = (unsigned char *)s2;
	if (copied_s1 == copied_s2 || !n)
		return (0);
	while (i < n)
	{
		if (copied_s1[i] != copied_s2[i])
			return (copied_s1[i] - copied_s2[i]);
		i++;
	}
	return (0);
}
