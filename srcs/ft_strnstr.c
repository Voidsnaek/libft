/*##################################################################################   
   Author : Snaek               -  File Name :                                     
   Email : voidsnaek@gmail.com  -  Creation Date : 23-11-2018
   Description :                -  Last Modified : Sat 24 Nov 2018 06:00:08 PM STD
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

char	*strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;

	if (!(*needle))
		return((char *)haystack);
	i = 0;
	while (i < n && *haystack)
	{
		while (i < n && *haystack != *needle && *haystack)
		{
			++haystack;
			++i;
		}
		if (*haystack == '\0' || i == n)
			return (NULL);
		while (haystack [i] && needle[i] && haystack[i] == needle[i])
			++i;
		if (!(needle[i]))
			return ((char *)haystack);
		i = 0;
		++haystack;
	}
	return (NULL);
}
