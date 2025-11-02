/* *********************************************** *\
   /\   /\
   \ \ / /			File Name : checkmate.h 
    \ V /	
    /. .\			Author : nico-ld
   =\ T /=
    / ^ \			Creation date : 01-11-2025 17:40 
   /\\ //\
 __\ " " /__		Last update : 02-11-2025 17:42 
(____/^\____)
\* *********************************************** */

#ifndef CHEKMATE_H
# define CHEKMATE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_display_board(char *chessboard);
void	ft_putchar(const char c);
size_t	ft_strlen(const char *s);
void	ft_putstr(const char *s, size_t n);
void	main_help(void);
int		ft_strncmp(char *s1, char *s2, size_t n);

#endif
