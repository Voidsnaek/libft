/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:35:41 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:35:43 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(const char *s, int fd)
{
	char	*new;
	size_t	size;

	new = ft_strjoin(s, "\n");
	size = ft_strlen(new);
	if (new != NULL)
	{
		write(fd, new, size);
		ft_strdel(&new);
	}
}
