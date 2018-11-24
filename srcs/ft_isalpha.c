/*##################################################################################   
   Author : Snaek               -  File Name :                                     
   Email : voidsnaek@gmail.com  -  Creation Date : 23-11-2018
   Description :                -  Last Modified : Fri 23 Nov 2018 09:56:44 PM STD
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

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}