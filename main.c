/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	main.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:39 
^ \	  /___\  /\ |			Last update : 03-11-2025 21:04                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

/*
board_input()
	Any param.
	return the chessboard, or NULL if allocation FAIL or user abort.
*/
char	*board_input(void)
{
	int		board_ok;
	int		abort;
	char	*input;

	input = calloc(65, sizeof(char));
	if (!input)
		return (NULL);
	board_ok = False;
	abort = False;
	while (!board_ok)
	{
		printf("\n>>> ");
		scanf("%s", input);
		if (ft_strncmp(input, "help", 4) == 0)
			main_help();
		else if (ft_strncmp(input, "quit", 4) == 0)
			return (NULL);
		else if (ft_valid_chessboard(input, &abort))
			board_ok = True;
		else
		{
			if (abort)
				return (NULL);
			printf("\nPlease select a good chessboard.");
		}
	}
	return (input);
}

int	main(void)
{
	char	*chessboard;

	printf("Please enter you're chessboard in this FEN format :\n");
	printf("Type 'help' for help menu or 'quit' to abort.");
	chessboard = board_input();
	if (!chessboard)
	{
		free (chessboard);
		return (0);
	}
	return (0);
}
