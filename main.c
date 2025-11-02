/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	main.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:39 
^ \	  /___\  /\ |			Last update : 02-11-2025 17:51                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

char	*main_menu(void)
{
	int		board_ok;
	//char	choice;
	char	*input;

	input = calloc(65, sizeof(char));
	if (!input)
		return (NULL);
	printf("Please enter you're chessboard in this FEN format :\n");
	printf("Type 'help' for help menu or 'quit' to abort.");
	board_ok = 0;
	while (!board_ok)
	{
		printf("\n>>> ");
		scanf("%s", input);
		if (ft_strncmp(input, "help", 4) == 0)
			main_help();
		else if (ft_strncmp(input, "quit", 4) == 0)
		{
			free(input);
			input = NULL;
			return (NULL);
		}
		printf("%s", input);
	}
	//scanf("%64s", chessboard);
	//printf("\nIs this correct ?\n");
	//ft_display_board(chessboard);
	return (NULL);
}

int	main(void)
{
	char	*chessboard;

	chessboard = main_menu();
	if (!chessboard)
		return (0);
	return (0);
}
