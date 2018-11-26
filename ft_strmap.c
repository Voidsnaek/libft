/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:40:02 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 14:01:32 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	size;

	size = ft_strlen(s);
	new = ft_strnew(size);
	if (new == NULL)
		return (NULL);
	while (*s)
	{
		*new = f(*s);
		++new;
		++s;
	}
	return (new - size);
}
