#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <time.h>

void caso(){
	int opcoesCad, compar, opcoesMenu; // Variaveis inteiras.
	char nome[10], sobrenome[20], cpf[15], nasc[12], email[50], senha[10]; // Variaveis string que armazenam as informa��es do usu�rio.
	char cpfAdmin [15] = "12345678912"; // CPF administrador.
	
	printf("O que voce deseja fazer?\n1-Cadastrar cliente.\n2-Cadastrar funcionario.\n");
	scanf("%d", &opcoesCad);
	//Escolhas do menu.

	switch (opcoesCad){ // Fun��o para permitir mais de uma op��o.
		case 1:
			printf("Nome: ");
			scanf(" %s", &nome);
			printf("Sobrenome: ");
			scanf(" %s", &sobrenome);
			printf("CPF: ");
			scanf(" %s", &cpf);
			// Comandos para recolher as informa��es.
	
			while (strcmp(cpf,cpfAdmin) == 0){ // A fun��o de comparar string retorna um valor, se for 0, significa que s�o iguais.				
				printf("\nCPF Invalido. Tente novamente.\n"); // Se o CPF cadastrado for igual ao do admin, o programa rejeita.
				printf("CPF: ");
				scanf(" %s", &cpf);
			}
	
			printf("Qual sua data de nascimento? (**/**/****): ");
			scanf("%s", &nasc);
			printf("Email: ");
			scanf("%s", &email);
			printf("Senha: ");
			scanf("%s", &senha);
			// Comandos para recolher as informa��es.
	
			printf("Cadastrado."); // Ap�s concluir o cadastro sem problemas, o programa emite a mensagem confirmando o cadastro.
	
			break; // Encerrar o case.
		case 2:
			printf("Nome: ");
			scanf("%s", &nome);
			printf("Sobrenome: ");
			scanf("%s", &sobrenome);
			printf("CPF: ");
			scanf("%s", &cpf);
			// Comandos para recolher as informa��es.
	
			compar = strcmp(cpf,cpfAdmin); // Comando que compara duas strings para verificar se elas s�o iguais.
	
			if (compar == 0){ // A fun��o de comparar string retorna um valor, se for 0, significa que s�o iguais.
				printf("\nCPF Invalido."); // Se o CPF cadastrado for igual ao do admin, o programa rejeita.
				exit(0);
			}
	
			printf("Qual sua data de nascimento? (**/**/****): ");
			scanf("%s", &nasc);
			printf("Email: ");
			scanf("%s", &email);
			printf("Senha: ");
			scanf("%s", &senha);
			// Comandos para recolher as informa��es.
	
			printf("Cadastrado.");	// Ap�s concluir o cadastro sem problemas, o programa emite a mensagem confirmando o cadastro.
	
			break; // Encerrar o case.
	}
}

void caso2(){
	int andar, quartos, banheiros; // Variaveis inteiras.
	char casa, garagem;
	float metCasa;	
	
	printf("Qual a metragem da casa?\n");
	scanf(" %f", &metCasa);
	// Coleta de informa��es.

	printf("A casa e terrea? s/n\n");
	// Coleta de informa��es.

	while (casa != 'n' && casa != 's'){ // Loop para garantir que a pessoa cadastrando as informa��es n�o fuja das respostas necess�rias.
		scanf(" %c", &casa);
		if (casa=='n'){ // Caso em que a casa n�o � t�rrea. 
			printf("Quantos andares tera na casa?\n");
			scanf(" %d", &andar);
		}else if (casa == 's'){ // Caso a casa seja t�rrea ele armazena o fato de ter apenas um andar.
			andar = 1;
		}else{ // Caso a pessoa digite uma resposta inv�lida.
			printf("Entrada invalida. Tente novamente\n");
		}
	}

	printf("Casa com garagem? s/n\n");
	scanf(" %c", &garagem);
	// Coleta de informa��es.

	while (garagem != 'n' && garagem != 's'){ // Loop para garantir que a pessoa cadastrando as informa��es n�o fuja das respostas necess�rias.
		printf("Entrada invalida. Tente novamente\n"); 
		scanf(" %c", &garagem);
	}

	printf("Quantos quartos terao na casa?\n");
	scanf(" %d", &quartos);
	printf("Quantos banheiros terao na casa?\n");
	scanf(" %d", &banheiros);
	// Coleta de informa��es.

	printf("\nA metragem da casa e %.2f m2.", metCasa);
	printf("\nA casa tem %d andar(es).", andar);
	// Coleta de informa��es.
	
	if (garagem == 's'){ // Fun��o para que seja exibido se a casa ter� garagem ou n�o.
		printf("\nA casa tera garagem.");
	}else{
		printf("\nA casa nao tera garagem.");
	}

	printf("\nA casa tera %d quarto(s).", quartos);
	printf("\nA casa tera %d banheiro(s).", banheiros);
	// Todos os printf a partir da metCasa s�o para exibir um "Relat�rio" so que a pessoa cadastrou.	
}

int main(){
	int opcoesMenu;
	
	printf("O que deseja fazer?\n1 - Cadastro de cliente.\n2 - Coleta de dados.\n");
	scanf(" %d", &opcoesMenu);
	
	switch (opcoesMenu){
		case 1: 
			caso();
			break;
		case 2:
			caso2();
			break;
	}
	return 0;	
}
