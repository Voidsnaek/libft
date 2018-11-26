/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:40:41 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:40:46 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*dest)
	{
		++dest;
		++i;
	}
	while (*src && count < n)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
		++count;
	}
	*dest = '\0';
	return (dest - i);
}
