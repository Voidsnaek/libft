/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:42:31 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:42:32 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new;
	size_t	i;

	new = ft_strnew(len);
	if (new == NULL)
		return (NULL);
	i = 0;
	s = s + start;
	while (i < len)
	{
		*new = *s;
		++new;
		++s;
		++i;
	}
	return (new - len);
}
