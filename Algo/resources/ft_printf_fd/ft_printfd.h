/* *********************************************** *\
   /\   /\
   \ \ / /			File Name : ft_prinfd.h 
    \ V /	
    /. .\			Author : nico-ld
   =\ T /=
    / ^ \			Creation date : 01-11-2025 17:40 
   /\\ //\
 __\ " " /__		Last update : 11-12-2025 18:26 
(____/^\____)
\* *********************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>
# include "colors.h"

int		ft_decimal_type(int fd, long int n);
int		ft_string_type(int fd, char	*str);
int		ft_char_type(int fd, char c);
int		ft_hexa_type(int fd, unsigned long hexa, char type);
int		ft_void_type(int fd, void *p);
int		ft_printfd(int fd, const char *str, ...);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);

// ======== MACROS DE PRINT ========

#define print(fd, fmt, ...) \
    ft_printfd(fd, fmt, ##__VA_ARGS__)

#define print_error(fd, fmt, ...) \
    ft_printfd(fd, RED BOLD "[ERROR] : " RESET RED fmt RESET "\n", ##__VA_ARGS__)

#define print_success(fd, fmt, ...) \
    ft_printfd(fd, GREEN BOLD "[SUCCESS] : " RESET GREEN fmt RESET "\n", ##__VA_ARGS__)

#define print_info(fd, fmt, ...) \
    ft_printfd(fd, BLUE BOLD "[INFO] : " RESET BLUE fmt RESET "\n", ##__VA_ARGS__)

#define print_warning(fd, fmt, ...) \
    ft_printfd(fd, YELLOW BOLD "[WARN] : " RESET YELLOW fmt RESET "\n", ##__VA_ARGS__)

#endif
