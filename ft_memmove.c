/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:34:32 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 14:12:10 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	*cdest;

	temp = (unsigned char *)src;
	cdest = (unsigned char *)dest;
//	if (!(temp = (char *)malloc(sizeof(char) * n)))
//		return (NULL);
//	ft_memcpy((void *)temp, src, n);
	i = 0;
	while (i < n)
	{
		cdest[i] = temp[i];
		++i;
	}
//	free(temp);
	return (dest);
}
