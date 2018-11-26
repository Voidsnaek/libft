/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:42:05 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:59:02 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_w(char const *s, char c)
{
	size_t	w_count;

	w_count = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (!(*s))
			break ;
		while (*s && *s != c)
			++s;
		++w_count;
	}
	return (w_count);
}

static size_t	ft_count_c(char const *s, char c)
{
	size_t c_count;

	c_count = 0;
	while (*s && *s != c)
	{
		++c_count;
		++s;
	}
	return (c_count);
}

static int		ft_init_array(char **array, char const *s, char c)
{
	size_t	w_count;

	w_count = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (!(*s))
			break ;
		array[w_count] = ft_strnew(ft_count_c(s, c));
		if (array[w_count] == NULL)
			return (0);
		while (*s && *s != c)
			++s;
		++w_count;
	}
	return (1);
}

static void		ft_fill_array(char **array, char const *s, char c)
{
	size_t	w_count;

	w_count = 0;
	while (*s)
	{
		while (*s && *s == c)
			++s;
		if (!(*s))
			break ;
		while (*s && *s != c)
		{
			*array[w_count] = *s;
			++array[w_count];
			++s;
		}
		++w_count;
	}
}

char			**ft_strsplit(char const *s, char c)
{
	size_t	w_count;
	char	**array;

	w_count = ft_count_w(s, c);
	if (w_count == 0)
		return (NULL);
	if (!(array = (char **)ft_memalloc(sizeof(char*) * (w_count + 1))))
		return (NULL);
	if (ft_init_array(array, s, c) == 0)
		return (NULL);
	ft_fill_array(array, s, c);
	return (array);
}
