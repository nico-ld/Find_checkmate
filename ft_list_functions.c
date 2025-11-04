/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	ft_list_functions.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	04-11-2025 21:06 
^ \	  /___\  /\ |			Last update : 04-11-2025 22:36                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

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

void	ft_lstadd_front(p_list **lst, p_list *new)
{
	new->next = *lst;
	*lst = new;
}

p_list	*ft_lstnew(char piece)
{
	p_list	*new_node;

	new_node = (p_list *)malloc(sizeof(p_list));
	if (!new_node)
		return (NULL);
	new_node->piece = piece;
	new_node->count = 1;
}

size_t	ft_checking_count_piece(**head)
{
	size_t	total;

	total = 0;
	while (*head)
	{
		if ((*head)->piece ==)
	}
}
