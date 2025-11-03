/* ==================================================== *\
          __     __	
         /  \~~~/  \		File Name :	help.c 
   ,----(     ..    )		Author : nico-ld
  /      \__     __/	
 /|         (\  |(			Creation date :	02-11-2025 14:41 
^ \	  /___\  /\ |			Last update : 02-11-2025 17:24                 
   |__|   |__|-''
\* ==================================================== */

#include "checkmate.h"

/*
		A B C D E F G H
	   ________________
	8 | R N B Q K B N R
	7 | P P P P P P P P
	6 | x x x x x x x x
	5 | x x x x x x x x
	4 | x x x x x x x x
	3 | x x x x x x x x
	2 | p p p p p p p p
	1 | r n b q k b n r

 */

void	main_help()
{
	printf("\n\n\n============================================================================================================================\n");
	printf("                                            > HELP MENU <\n\n");
	printf("  - How it works ?\n");
	printf("  \tYou have to enter the position in FEN format (explanation below).\n");
	printf("  \tThen the program will ask you if the postion is like you want. You must answer\n");
	printf("  \tby 'Y' or 'y' for yes. Anything else will be considered “no” and you will need\n");
	printf("  \tto re-enter your position.\n");
	printf("  \tOnce your chessboard has been confirmed, you will have to enter : who must play,\n");
	printf("  \twich castle is still avaible and if an en passant move is avaible.\n");
	printf("  \tYou can stop the program at any moment when you need to enter something.\n\n");

	printf("  - What is Fen format ?\n");
	printf("  \t-> Cultural point :\n");
	printf("  \t\tThe FEN format (Forsyth-Edwards Notation) is a standardized text format for\n");
	printf("  \t\tdescribing a single position in chess game. Invented by the journalist and\n");
	printf("  \t\tchess columnist David Forsyth in 1883, it was imporved by Steven J.Edward\n");
	printf("  \t\tto be understand by computers.\n\n");
	printf("  \t-> What is it ?\n");
	printf("  \t\tIt look like this : rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b KQkq e3 0 1\n  \t\tSo like this :\n\n");

	printf("  \t\t    A B C D E F G H\n");
	printf("  \t\t8 | r n b q k b n r\n");
	printf("  \t\t7 | p p p p p p p p\n");
	printf("  \t\t6 | . . . . . . . .\n");
	printf("  \t\t5 | . . . . . . . .\n");
	printf("  \t\t4 | . . . . P . . .\n");
	printf("  \t\t3 | . . . . . . . .\n");
	printf("  \t\t2 | P P P P . P P P\n");
	printf("  \t\t1 | R N B Q K B N R\n\n");

	printf("  \t\tHere the '.' represent the empty squares\n");
	printf("  \t\t  | The piece :\n");
	printf("  \t\t      White pieces are in MAJ, and Black pieces are in MIN.\n");
	printf("  \t\t      R : rook / N : knight / B : bishop / Q : queen / K : king / P : pawn\n\n");

	printf("  \t\t  | The empty squares :\n");
	printf("  \t\t      The digits represents the number of empty square between 2 pieces\n");
	printf("  \t\t      or side of chessboard. So the 4P3 mean : 4 empty squares before the pawn\n");
	printf("  \t\t      and 3 empty squares after.\n\n");

	printf("  \t\t  | The '/' and 'b' :");
	printf("  \t\t      The '/' represent the transition to the next row.\n");
	printf("  \t\t      The 'b' mean : black to move. for white it's 'w'.\n\n");

	printf("  \t\t  | The KQkq :\n");
	printf("  \t\t      It indicates what castle is still avaible. K for castle on king side and Q for queen size.\n");
	printf("  \t\t      if a castle is not anymore avaible the letter is removed. If the two castle aren't avaible\n");
	printf("  \t\t      letters are being relaced by '-'.\n\n");

	printf("  \t\t  | The 'e3' :\n");
	printf("  \t\t      It's here for the en passant move. When a pawn is moved two squares forward, the skipped square\n");
	printf("  \t\t      is noticed to remember the position for en passant rule.\n\n");

	printf("  \t\t  | The '0 1' :\n");
	printf("  \t\t      The '0' is for halfmove clock, when a player play, we increment it for any move but a pawn or\n");
	printf("  \t\t      a capture reset it. For this program we doesn't use it.\n");
	printf("\n\n============================================================================================================================\n\n");
}
