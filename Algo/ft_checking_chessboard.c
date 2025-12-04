/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	ft_checking_chessboard.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	03-11-2025 18:40 
^ \	  /___\  /\ |			Last update : 05-11-2025 14:00                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

/*
ft_confirm()
	Take in param the chessboard in FEN format.
	Return True or False according to user.
*/
static int	ft_confirm(char *fen, int *abort)
{
	char	choice;

	printf("\nIs this chessboard OK ? (y (yes)/ n (no)/ a (abort))\n\n");
	ft_display_fen(fen);
	printf(">>> ");
	scanf("%c", &choice);
	while (choice != 'y')
	{
		scanf("%c", &choice);
		if (choice == 'y')
			return (True);
		else if (choice == 'n')
			return (False);
		else if (choice == 'a')
		{
			*abort = True;
			return (False);
		}
		else
			printf("Bad input, try again. (y/n/a)\n>>> ");
		choice = 0;
	}
	return (True);
}

/*
ft_check_piece()
	Take in param a char.
	Return True if the char is a piece of Chess or False if isn't. 
*/
int	ft_check_piece(char c)
{
	static p_list	*head = NULL;
	p_list			*current;
	p_list			*new_node;

	if (!ft_ispiece(c))
		return (False);
	current = head;
	while (current != NULL)
	{
		if (current->piece == c)
			current->count++;
			return (True);
	}
	new_node = ft_lstnew(c);
	if (!new)
	{
		ft_lstclear(&head);
		return (False);
	}
	ft_lstadd_front(&head, new_node);
}

/*
ft_valid_chessboard()
	Take in param the chessboard in FEN format.
	Return True if is valid or False if not.

	Increment the number of square for each piece found and number of empty squares.
	If 'squares' != 64 it's False. If any other charactere (not piece, digit or '/')
	is found it's False.
*/
int	ft_valid_chessboard(char *fen, int *abort)
{
	int	squares;
	int	i;

	squares = 0;
	i = 0;
	while(fen[i])
	{
		if (ft_isdigit(fen[i]))
		{
			if (fen[i] == '0' || fen[i] == '9')
				return (False);
			squares += fen[i] - '0';
		}
		else if (ft_check_piece(fen[i]))
			squares++;
		else if (fen[i] != '/')
			return (False);
		i++;
	}
	if (squares == 64)
		return (ft_confirm(fen, abort));
	return (False);
}
