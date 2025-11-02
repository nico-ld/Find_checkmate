/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	ft_display.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:52 
^ \	  /___\  /\ |			Last update : 02-11-2025 14:44                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

/*
		A B C D E F G H
	   ________________
	8 | R N B Q K B N R
	7 | P P P P P P P P
	6 | x x x x x x x x
	5 | x x x x x x x x
	4 | x x x x x x x x
	3 | x x x x x x x x
	2 | p p p p p p p p
	1 | r n b q k b n r

 */

void	ft_display_board(char *chessboard)
{
	int	i;
	int	row;

	i = 0;
	row = 8;
	write (1, "    A B C D E F G H\n", 20);
	write (1, "   ________________\n", 20);
	while (row > 0)
	{
		ft_putchar(row + '0');
		write (1, " |", 2);
		row--;
		while ((i + 1) % 8 != 0)
		{
			ft_putchar(' ');
			ft_putchar(chessboard[i++]);
		}
		ft_putchar(' ');
		ft_putchar(chessboard[i++]);
		ft_putchar('\n');
	}
}
