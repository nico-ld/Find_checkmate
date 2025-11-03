/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	main.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:39 
^ \	  /___\  /\ |			Last update : 03-11-2025 11:23                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

/*

Need to make a first version of 
ft_valid_board() -> juste looking for a complete board (all square and good amount of piece)

 */

char	*main_menu(void) // Too many lines
{
	int		board_ok;
	char	choice;
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
		else if (ft_valid_chessboard(input))
		{
			printf("Is this chessboard OK ?\n");
			ft_display_fen(input);
			scanf("%c", &choice);
		}
		else
			printf("\nSomething going wrong with your input. Please try again.\n");
	}
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
