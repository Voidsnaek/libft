/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:42:42 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:42:43 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*new;
	size_t	size;

	size = 0;
	while (*s && (*s == 32 || *s == 9 || *s == 10))
		++s;
	while (*s && *s != 32 && *s != 9 && *s != 10)
	{
		++size;
		++s;
	}
	new = ft_strnew(size);
	if (new == NULL)
		return (NULL);
	s = s - size;
	while (*s && *s != 32 && *s != 9 && *s != 10)
	{
		*new = *s;
		++new;
		++s;
	}
	return (new);
}
