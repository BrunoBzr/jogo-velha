#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char nome[50];
	char letra;
}Jogador;

void NomeJogadores(Jogador *jogador);
void Letra(Jogador *jogador);
void main(){
	Jogador jogadores[2];
	
	while(1){
		int op;
		printf("---------- JOGO DA VELHA ----------\n");
		printf("1 - Jogar\n");
		printf("0 - Sair\n");
		printf(">> ");
		scanf("%d", &op);
		
		if(op==0){
			break;
		}
		
		switch(op)
		{
		case 1:
			fflush(stdin);
			system("cls");
			NomeJogadores(jogadores);
			break;
		default:
			printf("Opcao invalida!");
			break;
		}
	}//fim while
}

void NomeJogadores(Jogador *jogador){
	printf("---------- JOGO DA VELHA ----------\n");
	printf("Informe o nome do jogador 1: ");
	gets(jogador[0].nome);
	printf("Informe o nome do jogador 2: ");
	gets(jogador[1].nome);
	Letra(jogador);
	printf("Nome joagdor 1: %s\n", jogador[0].nome);
	printf("Nome joagdor 2: %s\n", jogador[1].nome);
	printf("Letra jogador 1: %c\n", jogador[0].letra);
	printf("Letra jogador 2: %c\n", jogador[1].letra);
	system("pause");
}

void Letra(Jogador *jogador){
	while(jogador[0].letra != 'X' || jogador[0].letra != 'O'){
		system("cls");
		printf("%s voce vai querer X ou O? ", jogador[0].nome);
		scanf("%c", toupper(&jogador[0].letra));
		
		printf("Letra jogador 1: %c\n", jogador[0].letra);
		system("pause");
		
		if(jogador[0].letra != 'X' || jogador[0].letra != 'O'){
			printf("Letra invalida!\n");
		}
		if(jogador[0].letra == 'X'){
			jogador[1].letra = 'O';
		}
	}//fim while
	
}