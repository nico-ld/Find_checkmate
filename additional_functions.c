/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	additional_functions.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	02-11-2025 14:45 
^ \	  /___\  /\ |			Last update : 03-11-2025 20:51                 
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

void	ft_putstr(const char *s, size_t n)
{
	write (1, s, n);
}

int	ft_isdigit(const char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_islower(const char c)
{
	return (c >= 'a' && c <= 'z');
}

char	ft_tolower(char c)
{
	if (!ft_islower(c))
		c += 32;
	return (c);
}

int	ft_ispiece(const char c)
{
	char	*pieces;
	int		i;

	pieces = "rnbqkpi";
	i = 0;
	while (pieces[i])
	{
		if (pieces[i] == ft_tolower(c))
			return (True);
		i++;
	}
	return (False);
}

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s2[i] - s1[i]);
}
