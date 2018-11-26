/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:33:44 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 14:20:49 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char	toc;
	unsigned char	*cdest;
	unsigned char	*csrc;

	i = 0;
	toc = (unsigned char)c;
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	while (i < n)
	{
		if (csrc[i] == toc)
			break ;
		else
			cdest[i] = csrc[i];
		++i;
	}
	return (dest);
}
