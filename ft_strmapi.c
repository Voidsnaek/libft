/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 14:01:46 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 14:01:54 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	size_t			size;
	unsigned int	i;

	size = ft_strlen(s);
	new = ft_strnew(size);
	if (new == NULL)
		return (NULL);
	while (*s)
	{
		*new = f(i, *s);
		++new;
		++s;
		++i;
	}
	return (new - size);
}
