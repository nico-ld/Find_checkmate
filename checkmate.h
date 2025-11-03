/* *********************************************** *\
   /\   /\
   \ \ / /			File Name : checkmate.h 
    \ V /	
    /. .\			Author : nico-ld
   =\ T /=
    / ^ \			Creation date : 01-11-2025 17:40 
   /\\ //\
 __\ " " /__		Last update : 03-11-2025 20:25 
(____/^\____)
\* *********************************************** */

#ifndef CHEKMATE_H
# define CHEKMATE_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# ifndef True
#  define True 1
# endif

# ifndef False
#  define False 0
# endif

void	ft_display_fen(char *fen);
size_t	ft_strlen(const char *s);
void	ft_putstr(const char *s, size_t n);
void	main_help(void);
char	ft_tolower(char c);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_isdigit(const char c);
int		ft_valid_chessboard(char *fen, int *abort);
int		ft_ispiece(const char c);
int		ft_islower(const char c);

#endif
