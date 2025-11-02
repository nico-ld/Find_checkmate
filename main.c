/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	main.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:39 
^ \	  /___\  /\ |			Last update : 01-11-2025 18:10                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

int	main(void)
{
	char	*chessboard;

	chessboard = calloc(65, sizeof(char));
	printf("Please enter you're chessboard in this format :\n");
	printf("RNBQKBNRPPPPPPPPxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxpppppppprnbqkbnr\n");
	printf("Type help for help menu or quit to abort. \n>>> ");
	scanf("%64s", chessboard);
	printf("\n");
	ft_display_board(chessboard);
}
