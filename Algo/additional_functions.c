/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	additional_functions.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	02-11-2025 14:45 
^ \	  /___\  /\ |			Last update : 05-11-2025 14:11                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

/*
ft_strlen()
	Take in param a string.
	Return the len of the string.
*/
size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return(len);
}

/*
ft_isdigit()
	Take in param a char.
	Return True is the char is a digit.
*/
int	ft_isdigit(const char c)
{
	return (c >= '0' && c <= '9');
}

/*
ft_islower()
	Take in param a char.
	Return True if the char is a lowercase letter.
*/
int	ft_islower(const char c)
{
	return (c >= 'a' && c <= 'z');
}

/*
ft_tolower()
	Take in param a char.
	Return the in lowercase letter is it was an uppercase letter.
*/
char	ft_tolower(char c)
{
	if (!ft_islower(c))
		c += 32;
	return (c);
}

/*
ft_ispiece()
	Take in param a char.
	Return True if the char is a piece of chess and False if isn't.
*/
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

/*
ft_strncmp()
	Take in param two string and a size_t variable.
	Return the comparaison of the 2 string.

	Compares on the n first bytes and return s2 - s1 if a difference
	is find or 0 if not.
*/
int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && i < n)
		i++;
	return (s2[i] - s1[i]);
}
