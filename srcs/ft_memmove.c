/*##################################################################################   
   Author : Snaek               -  File Name :                                     
   Email : voidsnaek@gmail.com  -  Creation Date : 23-11-2018
   Description :                -  Last Modified : Fri 23 Nov 2018 02:00:03 PM STD
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*temp;
	char	*cdest;

	cdest = (char *)dest;
	if (!(temp = (char *)malloc(sizeof(char) * n)))
		return (NULL);
	ft_memcpy((void *)temp, src, n);
	i = 0;
	while (i < n)
	{
		cdest[i] = temp[i];
		++i;
	}
	free(temp);
	return (dest);
}
