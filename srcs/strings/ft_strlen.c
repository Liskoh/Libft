/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:16:20 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:37:16 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t		ft_strlen(const char *str)
{
	int		i;

	i = 0;
	if (str == NULL)
		return (FALSE);
	while (str[i])
		i++;
	return (i);
}
