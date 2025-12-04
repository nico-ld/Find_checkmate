/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	helper_functions.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:52 
^ \	  /___\  /\ |			Last update : 04-12-2025 19:49                 
   |__|   |__|-''
\* ==================================================== */

#include "ft_printfd.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return ;
	len = ft_strlen(s);
	write (fd, s, len);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
