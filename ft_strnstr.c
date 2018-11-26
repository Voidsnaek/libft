/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:41:39 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 14:00:43 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	if (!(*needle))
		return ((char *)haystack);
	i = 0;
	while (i < n && *haystack)
	{
		while (i < n && *haystack != *needle && *haystack)
		{
			++haystack;
			++i;
		}
		if (*haystack == '\0' || i == n)
			return (NULL);
		while (haystack[i] && needle[i] && haystack[i] == needle[i])
			++i;
		if (!(needle[i]))
			return ((char *)haystack);
		i = 0;
		++haystack;
	}
	return (NULL);
}
