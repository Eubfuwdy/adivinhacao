#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	// imprime cabecalho
	printf("\n*************************************\n");
	printf("\n !!!Bem vindo ao jogo de adivinhacao!!!\n");
	printf("\n*************************************\n");



	//declaracao de variaveis
	int segundos = time(0);
	srand(segundos);
	int numeroSecreto = rand();
	int numero = numeroSecreto % 100;
	int chute = 0;
	int tentativas = 1;
	double pontos = 100;
	int acertou;
	int nivel;
	int numeroTentativas;
	// estrutura while para repetir o menu do jogo.
	while(nivel <= 0 || nivel >= 4) {
		//dificuldade do jogo
		
		printf("Qual o nivel de dificuldade?\n");
		printf("(1) Facil \n(2) Medio \n(3) Dificil\n\n");
		printf("Escolha o nivel de dificuldade: ");
		scanf("%d", &nivel);

		switch(nivel) {
			case 1:
				numeroTentativas = 15;
				break;
			case 2:
				numeroTentativas = 10;
				break;
			case 3:
				numeroTentativas = 5;
				break;
			default:
				printf("Escolha um nivel de 1 a 3 !!!");
				break;
		}
		continue;
	}

	// estrutura for
	for (int i = 1; i <= numeroTentativas; i++) {
		printf("\n\nEscolha um numero entre 1 e 100: \n");
		printf("Tentativas %d", tentativas);
		printf("\nChute: ");
		scanf("%d", &chute);
		system("clear");
		// estrutura de erro de digitacao
		if (chute < 0 || chute > 100){
			printf("tente numeros acima de 1 e abaixo de 100\n");
			continue;
		}
		// declaracao de variaveis para if
		
		acertou = (chute == numero);
		int maior = (chute > numero);
		int menor = (chute < numero);

		// estrutura if
		if (acertou) {	

			break;	
		}
		else if (maior){
			printf("\nChute errado, chute um numero menor que %d", chute);	
		}
		else if (menor) {
			printf("\nChute errado, chute um numero maior que %d", chute);
		}

		tentativas++;
		double pontosPerdidos = abs(chute - numero) / (double) 2;
		pontos -= pontosPerdidos;
		
	}

	//system("clear");
	if (acertou) {
		printf("\nVoce acertou!!! o numero secreto: %d\n", chute);
		printf("voce tentou %d vezes\n", tentativas);	
		printf("Pontos: %.1f\n", pontos);
	}
	else {
		printf("\nVoce perdeu, tente novamante!!!");
		printf("\nFim de jogo\n");
			                                      
			printf("		    ⣀⠤⠔⠒⠒⠒⠒⠒⠒⠒⠦⢄⣀⠀⠀⠀⠀   	\n");
			printf("		⠀⢀⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠑⢄⠀⠀		\n");
			printf("		⢀⠎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢣⠀      \n");
			printf("		⢸⠀⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢢⠈⡇      \n");
			printf("		⢸⠀⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⠀⡇      \n");
			printf("		⠘⡆⢸⠀⢀⣀⣤⣄⡀⠀⠀⠀⢀⣤⣤⣄⡀⠀⡇⡸⠀      \n");
			printf("		⠀⠘⣾⠀⣿⣿⣿⣿⣿⠀⠀⠀⣿⣿⣿⣿⣿⠀⡗⠁⠀      \n");
			printf("		⠀⠀⣿⠀⠙⢿⣿⠿⠃⢠⢠⡀⠙⠿⣿⠿⠃⠀⡇⠀⠀      \n");
			printf("		⠀⠀⠘⣄⡀⠀⠀⠀⢠⣿⢸⣿⠀⠀⠀⠀⠀⣠⠇⠀⠀      \n");
			printf("		⠀⠀⠀⠀⡏⢷⡄⠀⠘⠟⠈⠿⠁⠀⢠⡞⡹⠁⠀⠀⠀      \n");
			printf("		⠀⠀⠀⠀⢹⠸⠘⢢⢠⠤⠤⡤⡄⢰⢡⠁⡇⠀⠀⠀⠀      \n");
			printf("		⠀⠀⠀⠀⢸⠀⠣⣹⢸⠒⠒⡗⡇⣩⠌⢀⡇⠀⠀⠀⠀      \n");
			printf("		⠀⠀⠀⠀⠈⢧⡀⠀⠉⠉⠉⠉⠁⠀⣀⠜⠀⠀⠀⠀⠀      \n");
			printf("		⠀⠀⠀⠀⠀⠀⠉⠓⠢⠤⠤⠤⠔⠊⠁⠀⠀⠀⠀⠀⠀      \n");
	}
	
}