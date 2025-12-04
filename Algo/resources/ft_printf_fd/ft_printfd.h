/* *********************************************** *\
   /\   /\
   \ \ / /			File Name : ft_prinfd.h 
    \ V /	
    /. .\			Author : nico-ld
   =\ T /=
    / ^ \			Creation date : 01-11-2025 17:40 
   /\\ //\
 __\ " " /__		Last update : 04-12-2025 19:42 
(____/^\____)
\* *********************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>

int		ft_decimal_type(int fd, long int n);
int		ft_string_type(int fd, char	*str);
int		ft_char_type(int fd, char c);
int		ft_hexa_type(int fd, unsigned long hexa, char type);
int		ft_void_type(int fd, void *p);
int		ft_printf(int fd, const char *str, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

#endif
