#include <stdio.h>
#include <stdlib.h>

//typedef struct sEndereco{
//	char rua[100];
//	int numero;
//	char cidade[50];
//};

typedef struct sAgenda{
	char nome[100];
	char email[50];
	char endereco[50];
	//AQUI DEVE CHAMAR OUtRA STRUCT ENDERECO, POIS LA ELA ESTA MAIS ESPECIFICA
	//EU NAO USEI ELA, POIS O EXERCICIO NAO PEDE NADA ESPECIFICO DO ENDERECO, OU SEJA, PODE SER TUDO JUNTO.
	int telefone;
	
	
	
}Agenda;

int main(){
	
	Agenda vetor[10];
	int cont = 0, i, opc = 100; //iniciei com 100, apenas para entrar no Laço. Poderia ser Qualquer numero,  diferente de 0.
	char nome_pesquisa[100], mes_pesquisa, dia_pesquisa;
	
	for(cont = 0; cont < 50; cont++){
		
		printf("1. Incluir contatos no vetor (1 por vez) \n");
		printf("2. Mostrar os contatos cadastrados\n");	
		printf("3. Buscar um contato por nome e mostrar seus dados (se existir nomes iguais, mostrar todos)\n");	
		printf("4. Buscar e mostrar os contatos (10 contatos).\n");	
		scanf("%d", &opc);
		system("cls"); //limpa a tela, a cada ENTER.
		fflush(stdin);//limpa o BUFFER DO TECLADO. Usa-se muito, quando utiliza o GETS. 
		
		
		switch(opc){
			case 1:
				for(i = 0; i<2; i++){
					printf("Informe o nome da %d pessoa: \n", i+1);
					gets(vetor[i].nome);
					fflush(stdin);
					printf("Informe o e-mail de %s: \n", vetor[i].nome);
					gets(vetor[i].email);
					printf("Informe o endereco de %s: Ex: RUA, NUMERO, CIDADE\n", vetor[i].nome);
					gets(vetor[i].endereco);
					printf("Informe o telefone de %s: \n", vetor[i].nome);
					scanf("%d", &vetor[i].telefone);
					fflush(stdin);
					system("cls");
				}

				break;
			case 2:
				for(i = 0; i<50; i++){
					printf("NOME: %s\n", vetor[i].nome);
					printf("E-MAIL: %s\n", vetor[i].email);
					printf("ENDERECO: %s\n", vetor[i].endereco);
					printf("TELEFONE: %d\n", vetor[i].telefone);
					printf("\n\n");
				}
				break;
			case 3:
				printf("Informe o nome desejado: \n");
				gets(nome_pesquisa);
				for(i = 0; i<50; i++){
					if(strcmp(nome_pesquisa, vetor[i].nome) == 0){
						printf("NOME: %s\n", vetor[i].nome);
						printf("E-MAIL: %s\n", vetor[i].email);
						printf("ENDERECO: %s\n", vetor[i].endereco);
						printf("TELEFONE: %d\n", vetor[i].telefone);
						printf("\n\n");
					}
				}
				
				break;
			case 4:
				printf("Informe o telefone que deseja pesquisa: \n");
				scanf("%d", &telefone);
				for(i = 0; i<50; i++){
					if(mes_pesquisa == vetor[i].niver_mes){
						printf("NOME: %s\n", vetor[i].nome);
						printf("E-MAIL: %s\n", vetor[i].email);
						printf("ENDERECO: %s\n", vetor[i].endereco);
						printf("TELEFONE: %d\n", vetor[i].telefone);
						printf("ANIVERSARIO: %d/%d/%d", vetor[i].niver_dia, vetor[i].niver_mes, vetor[i].niver_ano);
						printf("\n\n");
					}
				}
				break;

					}
				}
				break;
			default:
				printf("Opcao Invalida\n\n");
		}
		cont++;
	}
	return 0;	
}
