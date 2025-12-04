/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	ft_basic_type.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:52 
^ \	  /___\  /\ |			Last update : 04-12-2025 19:43                 
   |__|   |__|-''
\* ==================================================== */

#include "ft_printfd.h"

int	ft_hexa_type(int fd, unsigned long hexa, char type)
{
	char	*base;
	int		len;

	len = 1;
	if (type == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (hexa >= 16)
		len += ft_hexa_type(fd, hexa / 16, type);
	ft_putchar_fd(base[hexa % 16], fd);
	return (len);
}

int	ft_void_type(int fd, void *p)
{
	int	len;

	if (!p)
	{
		ft_putstr_fd("(nil)", fd);
		return (5);
	}
	len = 2;
	ft_putstr_fd("0x", fd);
	len += ft_hexa_type(fd, (unsigned long)p, 'x');
	return (len);
}

int	ft_decimal_type(int fd, long int n)
{
	int	len;

	len = 1;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write (fd, "-2147483648", 11);
			return (11);
		}
		n *= -1;
		write (fd, "-", 1);
		len++;
	}
	if (n >= 10)
		len += ft_decimal_type(fd, n / 10);
	ft_putchar_fd((n % 10) + '0', fd);
	return (len);
}

int	ft_string_type(int fd, char	*str)
{
	int	len;

	if (!str)
	{
		len = ft_strlen("(null)");
		ft_putstr_fd("(null)", fd);
	}
	else
	{
		len = ft_strlen(str);
		ft_putstr_fd(str, fd);
	}
	return (len);
}

int	ft_char_type(int fd, char c)
{
	ft_putchar_fd(c, fd);
	return (1);
}
