/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:37:03 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:55 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		i;
	size_t		len;

	i = 0;
	if (!dest || !src)
		return (0);
	len = ft_strlen(src);
	if (!size)
		return (len);
	size--;
	while (src[i] && i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
