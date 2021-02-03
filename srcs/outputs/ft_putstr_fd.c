/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 02:06:03 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:36 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		ft_putstr_fd(char *s, int fd)
{
	int		i;

	i = 0;
	if (s == NULL || !fd)
		return ;
	write(fd, s, ft_strlen(s));
}
