/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 13:40:39 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:14:04 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int			ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t		index;

	index = 0;
	while ((s1[index] || s2[index]) && index < len)
	{
		if (s1[index] != s2[index])
			return ((unsigned char)s1[index] - s2[index]);
		index++;
	}
	return (0);
}
