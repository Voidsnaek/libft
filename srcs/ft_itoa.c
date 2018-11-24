/*##################################################################################   
   Author : Snaek               -  File Name :                                     
   Email : voidsnaek@gmail.com  -  Creation Date : 24-11-2018
   Description :                -  Last Modified : Sat 24 Nov 2018 06:10:36 PM STD
####################################################################################
##                             __     ##                 _      _      _          ##
##   _____ ____ _____    ____ |  | __ ##           /\   / \    / \    / \         ##
##  / ___//    \\__  \ _/ __ \|  |/ / ##           )( _/_\ \__/_\ \__/_\ \_______ ##
##  \__ \|   |  \/ __ \\  ___/|    <  ## ()///////(##)____\ \ ___\ \____\ \_____/ ##
## /___  >___|  (____  /\___  >__|_ \ ##           )(  \/  \_/    \_/    \ \_     ##
##     \/     \/     \/     \/     \/ ##           \/                     \/_*>~  ##
##                                    ##                                          ##
##################################################################################*/

#include "libft.h"

static size_t	ft_numsize(int n)
{
	size_t	size;

	size = 0;
	if (n < 0)
		++size;
	while (n != 0)
	{
		n = n / 10;
		++size;
	}
	return (size);
}

static void	ft_fill_string(char *s, int n, size_t size)
{
	s = s + size - 1;
	if (n < 10)
		*s = n;
	else
		while (size > 0)
		{
			*s = n % 10;
			n = n / 10;
			--s;
			--size;
		}
}

char		*ft_itoa(int n)
{
	size_t	size;
	char	*new;

	if (n == -2147483647)
		return ("-2147483647");
	if (n == 0)
		return ("0");
	size = ft_numsize(n);
	new = ft_strnew(size);
	if (new == NULL)
		return (NULL);
	if (n < 0)
	{
		*new = '-';
		ft_fill_string(new + 1, -n, size);
	}
	ft_fill_string(new, n, size);
	return (new);
}
