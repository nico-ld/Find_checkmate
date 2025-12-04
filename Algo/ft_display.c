/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	ft_display.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:52 
^ \	  /___\  /\ |			Last update : 05-11-2025 14:23                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"


// Example of chessboard display expected :
//
//		A B C D E F G H
//	   ________________
//	8 | r n b q k b n r
//	7 | p p p p p p p p
//	6 | . . . . . . . .
//	5 | . . . . . . . .
//	4 | . . . . P . . .
//	3 | . . . . . . . .
//	2 | P P P P . P P P
//	1 | R N B Q K B N R
//
// Example of FEN input :
//	 rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b KQkq e3 

/*
ft_display_fen()
	Take in param a chessboard in FEN format.
	No Return Value.

	Display the chessboard.
*/
void	ft_display_fen(char *fen)
{
	int	row;
	int	empty;
	int	i;

	row = 8;
	printf("    A B C D E F G H\n");
	printf("   ________________\n");
	while (row > 0)
	{
		printf("%d |", row--);
		while (fen[i] && fen[i] != '/')
		{
			if (ft_isdigit(fen[i]))
			{
				while (empty++ < fen[i] - '0')
					printf(" .");
			}
			else
				printf(" %c", fen[i]);
			i++;
			empty = 0;
		}
		printf("\n");
		i++;
	}
}
