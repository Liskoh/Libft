/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:10:17 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:14:07 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char				*ft_strnstr(const char *big, const char *small, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			small_size;

	i = 0;
	small_size = ft_strlen(small);
	if (!small_size)
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		while ((i + j) < len && big[i + j] == small[j])
		{
			j++;
			if (!small[j])
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
