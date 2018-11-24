/*##################################################################################   
   Author : Snaek               -  File Name :                                     
   Email : voidsnaek@gmail.com  -  Creation Date : 24-11-2018
   Description :                -  Last Modified : Sat 24 Nov 2018 11:48:19 AM STD
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

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*new;
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