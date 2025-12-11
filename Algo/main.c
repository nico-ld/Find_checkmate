/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	main.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	11-12-2025 17:50 
^ \	  /___\  /\ |			Last update : 11-12-2025 18:24                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

int main(void)
{
	int fd = open("chessboard.txt", O_RDWR);
	if (fd < 0)
	{
		print_error(2, "The input file isn't existing.");
		fd = open("chessboard.txt", O_CREAT, 0644);
		if (fd < 1)
		{
			print_error (2, "the file could not be created.");
			return (0);
		}
		else
			print_success (1, "The file has been successfully created.");
	}
	close(fd);
	return (0);
}
