/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:42:20 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 14:00:01 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;

	i = 0;
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack)
	{
		while (*haystack && *haystack != *needle)
			++haystack;
		if (*haystack == '\0')
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
