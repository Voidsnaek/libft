/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:31:38 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:31:39 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*cs;

	i = 0;
	cs = (char *)s;
	while (i < n)
	{
		cs[i] = '\0';
		++i;
	}
}