/*##################################################################################   
   Author : Snaek               -  File Name : main.c
   Email : voidsnaek@gmail.com  -  Creation Date : 21-11-2018
   Description :                -  Last Modified : Fri 23 Nov 2018 02:11:57 PM STD
####################################################################################
##                             __     ##                 _      _      _          ##
##   _____ ____ _____    ____ |  | __ ##           /\   / \    / \    / \         ##
##  / ___//    \\__  \ _/ __ \|  |/ / ##           )( _/_\ \__/_\ \__/_\ \_______ ##
##  \__ \|   |  \/ __ \\  ___/|    <  ## ()///////(##)____\ \ ___\ \____\ \_____/ ##
## /___  >___|  (____  /\___  >__|_ \ ##           )(  \/  \_/    \_/    \ \_     ##
##     \/     \/     \/     \/     \/ ##           \/                     \/_*>~  ##
##                                    ##                                          ##
##################################################################################*/

#include "includes/libft.h"

int	main(int argc, char **argv)
{
	int	num;
	
	ft_putendl("Please enter a single numerical argument corresponding to one of the following valid functions:");
	ft_putendl("1: ft_memset");
	ft_putendl("2: ft_bzero");
	ft_putendl("3: ft_memcpy");
	ft_putendl("4: ft_memmove");
	ft_putendl("5: ft_memchr");
	ft_putendl("6: ft_memcmp");
	ft_putendl("7: ft_strlen");
	ft_putendl("8: ft_strdup");
	ft_putendl("9: ft_strcpy");
	ft_putendl("10: ft_strncpy");
	if (argc != 2)
	{
		ft_putendl("Now that you have the list I bet you can make it work, go on, try again!");
		return (0);
	}
	num = ft_atoi(argv[1]);
	if (num == 1)
	{
		ft_putendl("At least that worked!");
		return (0);
	}
	if (num == 9)
	{
		char *test;
		test = malloc(5);
		ft_strcpy(test, "test");
		ft_putendl(test);
		free(test);
	}
	ft_putendl("didnt");
	return (0);
}
