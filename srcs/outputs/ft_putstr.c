/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 01:30:10 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:41:36 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int			ft_putstr(const char *s)
{
	int		len;

	len = ft_strlen(s);
	if (!len)
		return (len);
	write(1, s, ft_strlen(s));
	return (len);
}
