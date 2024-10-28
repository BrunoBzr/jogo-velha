#include <stdio.h>
#include <stdlib.h>

typedef struct {
	char nome[50];
	char letra;
};


void main(){
	
	
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
			break;
		default:
			printf("Opcao invalida!");
			break;
		}
	}//fim while
}

void NomeJogadores(){
	
}