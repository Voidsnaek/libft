/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:32:56 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 14:03:53 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numsize(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		++size;
	while (n != 0)
	{
		n = n / 10;
		++size;
	}
	return (size);
}

static void		ft_fill_string(char *s, int n, size_t size)
{
	s = s + size - 1;
	if (n < 10)
		*s = n;
	else
		while (size > 0)
		{
			*s = n % 10;
			n = n / 10;
			--s;
			--size;
		}
}

char			*ft_itoa(int n)
{
	size_t	size;
	char	*new;

	if (n == -2147483647)
		return ("-2147483647");
	if (n == 0)
		return ("0");
	size = ft_numsize(n);
	new = ft_strnew(size);
	if (new == NULL)
		return (NULL);
	if (n < 0)
	{
		*new = '-';
		ft_fill_string(new + 1, -n, size);
	}
	ft_fill_string(new, n, size);
	return (new);
}
