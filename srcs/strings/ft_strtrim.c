/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 20:11:24 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:14:14 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int			ft_is_set(char c, char const *set)
{
	int			i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static size_t		ft_is_only_set(char const *s1, char const *set)
{
	size_t		i;

	i = 0;
	while (s1[i])
	{
		if (!ft_is_set(s1[i], set))
			return (0);
		i++;
	}
	return (1);
}

static size_t		ft_get_size(char const *s1, char const *set)
{
	size_t		i;
	size_t		size;

	size = ft_strlen(s1);
	i = 0;
	while (ft_is_set(s1[size - 1], set))
		size--;
	while (ft_is_set(s1[i], set))
	{
		size--;
		i++;
	}
	size++;
	return (size);
}

static size_t		ft_getfirst_char(char const *s1, char const *set)
{
	size_t		i;

	i = 0;
	while (ft_is_set(s1[i], set))
		i++;
	return (i);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char		*trimed;
	size_t		size;
	size_t		i;
	size_t		j;

	size = ft_get_size(s1, set);
	i = ft_getfirst_char(s1, set);
	j = 0;
	if (!s1)
		return (NULL);
	if (set == NULL)
		return ((char *)s1);
	if (ft_is_only_set(s1, set))
		return (ft_strdup(""));
	if (!(trimed = malloc((size) * sizeof(char))))
		return (NULL);
	size = ft_strlen(s1);
	while (ft_is_set(s1[size - 1], set))
		size--;
	i--;
	while (s1[++i] && i < size)
		trimed[j++] = s1[i];
	trimed[j] = '\0';
	return (trimed);
}
