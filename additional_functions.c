/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	additional_functions.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	02-11-2025 14:45 
^ \	  /___\  /\ |			Last update : 02-11-2025 17:40                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return(len);
}

void	ft_putchar(const char c)
{
	write (1, &c,1);
}

void	ft_putstr(const char *s, size_t n)
{
	write (1, s, n);
}

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s2[i] - s2[i]);
}
