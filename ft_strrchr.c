/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:41:53 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:41:54 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t i;

	i = 0;
	while (*s)
	{
		++s;
		++i;
	}
	while (i > 0)
	{
		if (*s == c)
			return ((char *)s);
		--i;
	}
	return (NULL);
}
