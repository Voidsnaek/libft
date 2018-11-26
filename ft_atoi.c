/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hplouvie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/25 13:30:46 by hplouvie          #+#    #+#             */
/*   Updated: 2018/11/25 13:30:49 by hplouvie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	flag;

	flag = 1;
	i = 0;
	while (*nptr == 32 || (*nptr > 7 && *nptr < 13))
		++nptr;
	if (*nptr == 45)
	{
		flag = -1;
		++nptr;
	}
	else if (*nptr == 43)
		++nptr;
	if (*nptr > 47 && *nptr < 58)
		while (*nptr > 47 && *nptr < 58)
		{
			i = i * 10 + flag * (*nptr - 48);
			++nptr;
		}
	else
		return (0);
	return (i);
}
