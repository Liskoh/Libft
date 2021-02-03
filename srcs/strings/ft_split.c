/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hjordan <hjordan@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 07:56:49 by hjordan           #+#    #+#             */
/*   Updated: 2021/02/03 14:13:41 by hjordan          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static int			ft_get_size(char const *s, char c)
{
	int		idx;
	int		is_separator;
	int		size;

	idx = 0;
	is_separator = 0;
	size = 0;
	while (s[idx])
	{
		if (s[idx] == c)
			is_separator = 0;
		else if (!is_separator)
		{
			is_separator = 1;
			size++;
		}
		idx++;
	}
	return (size);
}

static char			*ft_malloc_tab(char const *str, char c, int idx)
{
	int			len;
	char		*s;

	len = 0;
	while (str[idx] && str[idx] != c)
	{
		len++;
		idx++;
	}
	if (!(s = malloc((len + 1) * sizeof(char ))))
		return (NULL);
	return (s);
}

static void			ft_create_str(char const *str, char **splited, char c)
{
	size_t			idx;
	size_t			idx2;
	size_t			pos;

	idx = 0;
	pos = 0;
	while (str[idx])
	{
		if (str[idx] == c)
		{
			idx++;
			continue;
		}
		idx2 = 0;
		splited[pos] = ft_malloc_tab(str, c, idx);
		while (str[idx] != c && idx < ft_strlen(str))
		{
			splited[pos][idx2] = str[idx];
			idx2++;
			idx++;
		}
		splited[pos][idx2] = '\0';
		pos++;
	}
	splited[pos] = NULL;
}

static int			ft_has_error(char **splited, size_t size)
{
	size_t		idx;

	idx = 0;
	while (idx < size)
	{
		if (splited[idx] == NULL)
			return (1);
		idx++;
	}
	return (0);
}

char				**ft_split(char const *s, char c)
{
	char		**splited;
	size_t		size;
	size_t		idx;

	idx = 0;
	size = ft_get_size(s, c);
	if (s == NULL)
		return (NULL);
	if (!(splited = malloc((size + 1) * sizeof(char *))))
		return (NULL);
	ft_create_str(s, splited, c);
	if (ft_has_error(splited, size))
	{
		while (idx < size)
		{
			free(splited[idx]);
			idx++;
		}
		free(splited);
		return (NULL);
	}
	return (splited);
}
