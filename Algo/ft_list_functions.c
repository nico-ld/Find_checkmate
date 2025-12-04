/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	ft_list_functions.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	04-11-2025 21:06 
^ \	  /___\  /\ |			Last update : 05-11-2025 13:48                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

/*
ft_lstclear()
	Take in param the head of a list, then delete the whole list.
*/
void	ft_lstclear(**lst)
{
	if ((*lst)->next)
		ft_lstclear(&((*lst)->next));
	free((*lst)->piece);
	(*lst)->piece = NULL;
	free((*lst)->count);
	free(*lst);
	*lst = NULL;
}

/*
ft_lstadd_front()
	Take in param the head of a list and a new node.
	Add the new node to the head of list.
*/
void	ft_lstadd_front(p_list **lst, p_list *new)
{
	new->next = *lst;
	*lst = new;
}

/*
ft_lstnew()
	Take in param the name of the piece wanted.
	Return a new node of list  or NULL if allocation fail.
*/
p_list	*ft_lstnew(char piece)
{
	p_list	*new_node;

	new_node = (p_list *)malloc(sizeof(p_list));
	if (!new_node)
		return (NULL);
	new_node->piece = piece;
	new_node->count = 1;
}

/*
ft_checking_count_piece()
	Take in param the head of a list.
	Return True if there is the good amount of piece, or False if not.

	This Function check there is no more than 32 piece on the chessboard and 
	if there is 1 king for each team. Then she will check the number of pawn,
	if there is more than 8 pawns for a team, this is an error. For the rest 
	of the pieces, she will keep track of the number of pawns. If two pawns 
	are missing, then the count for each piece may be higher. 
*/
size_t	ft_checking_count_piece(**head)
{
	size_t	total;

	total = 0;
	while (*head)
	{
		if ((*head)->piece ==)
	}
}
