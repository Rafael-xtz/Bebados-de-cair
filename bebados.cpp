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



/* 
 * Prototipos de funcao
 */
int sorteio(int minimo, int maximo); //realiza o sorteio. Variavel minimo garante um valor minimo no sorteio, variavel maximo garante um valor maximo no sorteio

int rodada( ); // Realiza a rodada

char* acao(int opcao_sorteada ); // escolhe a acão baseada no valor sorteado

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	printf ( "Nós estamos todos bebados. Bebados de cair!\nE todos que não estiverem bebados, deem o fora daqui!\n\n" );

	rodada();
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int sorteio(int minimo, int maximo)
{
	int opcao_sorteada; 
	srand(time(NULL));
opcao_sorteada = rand() % maximo + minimo;
	return opcao_sorteada;
}

char* acao(int opcao_sorteada)
{
	const char* acao_0 = "Passe a vez";

	const char* acao_1 = "Beba uma dose";

	const char* acao_2 = "Beba duas doses";

	const char* acao_3 = "Beba e escolha alguem para beber";

	const char* acao_4 = "Escolha duas pessoas para beber";

	const char* acao_5 = "Beba e fale um trava-lingua";	

	const char* acao_6 = "Quem está a sua direita bebe junto";

	const char* acao_7 = "Quem está a sua esquerda bebe junto";

	const char* acao_8 = "Só bebe quem está do seu lado";

	const char* acao_9 = "Escolha alguem para beber";

	const char* acao_10 = "Todos bebem";

	const char* acao_11 = "Beba sem usar as mãos";
	
	const char* acao_12 = "Beba e gire segurando um cabo de vassoura";

	const char* acao_13 = "Beba e faça um exercicio";
	
	switch (opcao_sorteada)
	{
		case 0:
			
			return (char*) acao_0;
			break;
		case 1:
			
			return (char*) acao_1;
			break;
		case 2:
			
			return (char*) acao_2;
			break;

		case 3:
			
			return (char*) acao_3;
			break;
		case 4:
			
			return (char*) acao_4;
			break;
		case 5:
			
			return (char*) acao_5;
			break;

		case 6:
			
			return (char*) acao_6;
			break;
		case 7:
			
			return (char*) acao_7;
			break;
		case 8:
			
			return (char*) acao_8;
			break;

		case 9:
			
			return (char*) acao_9;
			break;

		case 10:
			
			return (char*) acao_10;
			break;
		case 11:
			
			return (char*) acao_11;
			break;

		case 12:
			
			return (char*) acao_12;
			break;

		case 13:
			
			return (char*) acao_13;
			break;


	
	}

	return (char*) acao_1;
}


int rodada()
{
	bool jogo = true;

	while (jogo == true)
	{


	char* frase;
	int opcao_sorteada;
	opcao_sorteada = sorteio(0, 14);
	printf ( "Opção sorteada: %d\n", opcao_sorteada);
	// acao( 1 );
	frase = acao( opcao_sorteada );
	printf ( "%s\n", frase );
	getchar();
	}
	return 0;
}
