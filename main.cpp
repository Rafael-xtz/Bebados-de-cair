/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/02/21 22:02:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <cstdlib>
#include <ncurses.h>
#include "sorteio.h"


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	char* virou;
	int vira_vira;
	int i;
	initscr();
	printw("Nós estamos bebados. Bebados de cair...\n");
	printw("Todos que não estiverem bebados...");
	printw("Deem o fora daqui!\n\n");

	for ( i = 0; i < 10; i += 1 ) {
	vira_vira = vira_vira_roleta(1, 10);
	virou = virou_roleta(vira_vira);

	move(10, 10);		
	printw("\t%s", virou);
	refresh(); 
	getch();
	clrtoeol();
	}
	endwin();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

