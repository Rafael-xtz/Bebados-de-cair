/*
 * =====================================================================================
 *
 *       Filename:  bebados1.cpp
 *
 *    Description:  Jogo de bebidas.
 *    Se dirigir, não beba.
 *    Se beber, me chame
 *        Version:  1.0
 *        Created:  05/31/21 15:22:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Rafael Schutz (), 
 *   Organization:  
 *
 * =====================================================================================
 */


#include 	<cstdlib>
#include 	<ctime>
#include	"sorteio.h"


/* 
 * Prototipos de funcao
 */
int vira_vira_roleta(int minimo, int maximo); //realiza o sorteio. Variavel minimo garante um valor minimo no sorteio, variavel maximo garante um valor maximo no sorteio


char* virou_roleta(int opcao_sorteada ); // escolhe a acão baseada no valor sorteado

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */



int vira_vira_roleta(int minimo, int maximo)
{
	int vira_vira; 
	srand(time(NULL));
	vira_vira = rand() % maximo + minimo;
	return vira_vira;
}

char* virou_roleta(int opcao_sorteada)
{
	const char* virou_0 = "Passe a vez";

	const char* virou_1 = "Beba uma dose";

	const char* virou_2 = "Beba duas doses";

	const char* virou_3 = "Beba e escolha alguem para beber";

	const char* virou_4 = "Escolha duas pessoas para beber";

	const char* virou_5 = "Beba e fale um trava-lingua";	

	const char* virou_6 = "Quem está a sua direita bebe junto";

	const char* virou_7 = "Quem está a sua esquerda bebe junto";

	const char* virou_8 = "Só bebe quem está do seu lado";

	const char* virou_9 = "Escolha alguem para beber";

	const char* virou_10 = "Todos bebem";

	const char* virou_11 = "Beba sem usar as mãos";
	
	const char* virou_12 = "Beba e gire segurando um cabo de vassoura";

	const char* virou_13 = "Beba e faça um exercicio";
	
	switch (opcao_sorteada)
	{
		case 0:
			
			return (char*) virou_0;
			break;
		case 1:
			
			return (char*) virou_1;
			break;
		case 2:
			
			return (char*) virou_2;
			break;

		case 3:
			
			return (char*) virou_3;
			break;
		case 4:
			
			return (char*) virou_4;
			break;
		case 5:
			
			return (char*) virou_5;
			break;

		case 6:
			
			return (char*) virou_6;
			break;
		case 7:
			
			return (char*) virou_7;
			break;
		case 8:
			
			return (char*) virou_8;
			break;

		case 9:
			
			return (char*) virou_9;
			break;

		case 10:
			
			return (char*) virou_10;
			break;
		case 11:
			
			return (char*) virou_11;
			break;

		case 12:
			
			return (char*) virou_12;
			break;

		case 13:
			
			return (char*) virou_13;
			break;


	
	}

	return (char*) virou_1;
}


int rodada()
{
	bool jogo = true;

	while (jogo == true)
	{


	char* frase;
	int opcao_sorteada;
	opcao_sorteada = vira_vira_roleta(0, 14);
	printf ( "Opção sorteada: %d\n", opcao_sorteada);
	// acao( 1 );
	frase = virou_roleta( opcao_sorteada );
	printf ( "%s\n", frase );
	getchar();
	}
	return 0;
}
