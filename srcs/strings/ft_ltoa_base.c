/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ltoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 16:05:14 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 15:08:25 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int			ft_get_ltoa_size(unsigned long int n, char *base)
{
	int				i;
	int				base_len;

	i = 0;
	base_len = ft_strlen(base);
	while (n)
	{
		n /= base_len;
		i++;
	}
	return (i);
}

static char			*ft_fill_ltoa
	(unsigned long int n, char *base, int size, char *itoa)
{
	int				base_len;

	base_len = ft_strlen(base);
	while (n)
	{
		itoa[--size] = base[n % base_len];
		n /= base_len;
	}
	return (itoa);
}

char				*ft_ltoa_base(long int n, char *base)
{
	char					*itoa;
	int						size;
	unsigned long int		nb;

	nb = (unsigned long int)n;
	size = ft_get_ltoa_size(nb, base);
	if (n == 0)
		return (ft_strdup("0"));
	if (!(itoa = malloc((size + 1) * sizeof(char))))
		return (NULL);
	itoa[size] = '\0';
	return (ft_fill_ltoa(n, base, size, itoa));
}
