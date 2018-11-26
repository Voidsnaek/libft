/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:39:33 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:53:16 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst && (size - i) > 0)
	{
		++i;
	}
	while (*src && (size - i) > 0)
	{
		*dst = *src;
		++dst;
		++src;
		++i;
	}
	if (*src)
		return (i);
	else
	{
		*dst = '\0';
		return (i);
	}
}
