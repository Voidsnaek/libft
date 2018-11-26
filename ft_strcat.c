/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:36:59 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:37:00 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	size_t i;

	while (*dest)
	{
		++dest;
		++i;
	}
	while (*src)
	{
		*dest = *src;
		++dest;
		++src;
		++i;
	}
	*dest = '\0';
	return (dest - i);
}
