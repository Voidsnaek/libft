/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:33:10 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 14:24:52 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	void	*new;

	if (!(new = malloc(sizeof(*new) * size)))
		return (NULL);
	i = 0;
	while (i < size)
	{
		new = 0;
		++new;
		++i;
	}
	return (new - size);
}
