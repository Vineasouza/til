#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	//Imprime o cabecalho do jogo
	printf("\n\n");
	printf("          P  /_\\  P                              \n");
	printf("         /_\\_|_|_/_\\                            \n");
	printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
	printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhacao! \n");
	printf("    |\" \"  |  |_|  |\"  \" |                     \n");
	printf("    |_____| ' _ ' |_____|                         \n");
	printf("          \\__|_|__/                              \n");
	printf("\n\n");

	printf("\nNesse jogo voce precisa tentar acertar o numero secreto!");
	printf("\nO numero secreto vai de 0 a 99");
	printf("\n\n");

	//Gerando numeros randomicos
	int segundos = time(0);
	srand(segundos);

	int numerogrande = rand ();

	int numerosecreto = numerogrande % 100;
	int chute;
	int tentativas = 0;
	double pontos = 1000;

	int acertou;

	int nivel;
	printf("\n*******************************************************************************");
	printf("\nQual o nivel de dificuldade deseja jogar?");
	printf("\n(1)FACIL (20 tentativas) | (2)MEDIO (15 tentativas) | (3)DIFICIL (6 tentativas)");
	printf("\n*******************************************************************************");
	printf("\nEscolha: ");
	scanf("%d", &nivel);

	int numerodetentativas;

	switch(nivel){
		case 1:
			numerodetentativas = 20;
			break;

		case 2:
			numerodetentativas = 15;
			break;

		default:
			numerodetentativas = 6;
			break;
	}

	for(int i = 1; i <= numerodetentativas; i++){
		printf("\nTentativa %d", tentativas+1);
		printf("\nQual e o seu chute? ");

		scanf("%d", &chute);
		printf("\nSeu chute foi: %d", chute);

		if(chute < 0){
			printf("\nVoce nao pode chutar numeros negativos!");
			continue;
		}

		int acertou = (chute == numerosecreto);
		int maior = (chute > numerosecreto);

		if(acertou){
			break;
		}

		else if(maior){
			printf("\nSeu chute foi maior que o numero secreto!");
			printf("\n");
		}

		else {
			printf("\nSeu chute foi menor que o numero secreto!");
			printf("\n");
		}

		tentativas++;

		double pontosperdidos = abs( chute - numerosecreto ) / (double)2;
		pontos = pontos - pontosperdidos;
	}
	printf("\n");
	printf("\nFim de Jogo!\n");

	if(acertou) {
		printf("\n");
		printf("             OOOOOOOOOOO               \n");
		printf("         OOOOOOOOOOOOOOOOOOO           \n");
		printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
		printf("    OOOOOO      OOOOO      OOOOOO      \n");
		printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
		printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
		printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
		printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
		printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
		printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
		printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
		printf("         OOOOOO         OOOOOO         \n");
		printf("             OOOOOOOOOOOO              \n");
		printf("\nVoce ganhou!");
		printf("\nVoce acertou em %d tentativas", tentativas+1);
		printf("\nTotal de pontos: %.1f", pontos);
	}
	else{
		printf("       \\|/ ____ \\|/    \n");
    printf("        @~/ ,. \\~@      \n");
    printf("       /_( \\__/ )_\\    \n");
		printf("          \\__U_/        \n");
		printf("\nVoce perdeu! Tente de novo!");
	}
}
