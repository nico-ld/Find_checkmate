/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	ft_printfd.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	01-11-2025 17:52 
^ \	  /___\  /\ |			Last update : 04-12-2025 19:44                 
   |__|   |__|-''
\* ==================================================== */

#include "ft_printfd.h"

static int	ft_putchar_loop(int fd, const char *str, int *len)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '%')
	{
		ft_putchar_fd(str[i], fd);
		i++;
		*len += 1;
	}
	return (i);
}

static int	ft_conditional_format(int fd, va_list ap, char type) // This function need to be review
{
	int	len;

	len = 0;
	if (type == 'c')
		len += ft_char_type(fd, (char)va_arg(ap, int));
	else if (type == '%')
		len += ft_char_type(fd, (int) '%');
	else if (type == 's')
		len += ft_string_type(fd, va_arg(ap, char *));
	else if (type == 'd' || type == 'i')
		len += ft_decimal_type(fd, va_arg(ap, int));
	else if (type == 'u')
		len += ft_decimal_type(fd, va_arg(ap, unsigned int));
	else if (type == 'p')
		len += ft_void_type(fd, va_arg(ap, void *));
	else if (type == 'x' || type == 'X')
		len += ft_hexa_type(fd, va_arg(ap, unsigned int), type);
	return (len);
}

int	ft_printf(int fd, const char *str, ...) // This function need to be review to understand fd
{
	va_list	ap;
	int		i;
	int		len;

	va_start(ap, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_conditional_format(fd, ap, str[i + 1]);
			i++;
			if (str[i])
				i++;
		}
		else if (str[i])
			i += ft_putchar_loop(fd, &str[i], &len);
	}
	va_end(ap);
	return (len);
}
