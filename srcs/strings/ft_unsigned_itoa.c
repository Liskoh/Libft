/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 09:08:01 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 15:12:32 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int				ft_get_size(long int nb)
{
	int			size;

	size = 0;
	if (nb < 0)
	{
		nb = -nb;
		size = 1;
	}
	while (nb)
	{
		size++;
		nb /= 10;
	}
	return (size);
}

char					*ft_unsigned_itoa(unsigned int nb)
{
	char		*itoa;
	int			size;
	int			negative;

	if (nb == 0)
		return (ft_strdup("0"));
	size = ft_get_size(nb);
	negative = FALSE;
	if (!(itoa = malloc((size + 1) * sizeof(char))))
		return (NULL);
	itoa[size] = '\0';
	while (--size)
	{
		itoa[size] = nb % 10 + '0';
		nb /= 10;
	}
	itoa[0] = (negative ? '-' : nb % 10 + '0');
	return (itoa);
}
