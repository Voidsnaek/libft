/*##################################################################################   
   Author : Snaek               -  File Name :                                     
   Email : voidsnaek@gmail.com  -  Creation Date : 23-11-2018
   Description :                -  Last Modified : Fri 23 Nov 2018 01:59:16 PM STD
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

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*cdest;
	char	*csrc;

	i = 0;
	cdest = (char *)dest;
	csrc = (char *)src;
	while (i < n)
	{
		if (csrc[i] == c)
			break;
		else
			cdest[i] = csrc[i];
		++i;
	}
	return (dest);
}
