/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:35:27 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:35:28 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	char		*new;
	char		**start;

	new = ft_strjoin(s, "\n");
	start = &new;
	write(1, new, ft_strlen(new));
	if (new != NULL)
		free(*start);
}
