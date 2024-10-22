#include <stdio.h> //biblioteca de comunicação do usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsalvel por cuidar das string


int registro()
{   char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];

printf("Digite o CPF a ser cadastrado:");
scanf("%s",cpf);

strcpy(arquivo,cpf); //copiar valoes da string

FILE *file;//cria arquivos
file = fopen(arquivo,"w");//cria arquivos
fprintf(file,cpf);//salvo valor da variavel
fclose(file);//fecha o arquivo

file=fopen(arquivo,"a");
fprintf(file,",");
fclose(file);

printf("Digite o nome a ser cadastrado:");
scanf("%s",nome);

file=fopen(arquivo,"a");
fprintf(file,nome);
fclose(file);

file=fopen(arquivo,"a");
fprintf(file,",");
fclose(file);

printf("Digite o sobrenome a ser casdastrado:");
scanf("%s",sobrenome);

file=fopen(arquivo,"a");
fprintf(file,sobrenome);
fclose(file);

file=fopen(arquivo,"a");
fprintf(file,",");
fclose(file);

printf("Digite o cargo a ser casdastrado:");
scanf("%s",cargo);

file=fopen(arquivo,"a");
fprintf(file,cargo);
fclose(file);

file=fopen(arquivo,"a");
fprintf(file,",");
fclose(file);

system("pause");
}

int consulta()
{setlocale(LC_ALL, "Portuguese");
char cpf[40];
char conteudo[200];
printf("Digite o CPF a ser consultado:");
scanf("%s,",cpf);

FILE * file;
file = fopen(cpf,"r");
 if(file== NULL)
 {
 	printf("Não foi possivel abrir o arquivo,não localizado\n");
 }
while(fgets(conteudo,200,file)!=NULL);
{printf("\nEssas sãos as informaçoes do usuario:");
printf("%s",conteudo);
printf("\n\n");
system("pause");
}
}

int deletar()
{printf("Voçê escolheu Deletar Nomes \n");
 	
	 system("pause");
 	
}


int main()
{
	int opcao=0;//definindo variáveis

	int laco=1;
	
	for(laco=1;laco=1;)
{
	system("cls");
	setlocale(LC_ALL, "Portuguese");//definindo linguagens
	
 printf("####CARTÓRIO DA EBAC#### \n\n");//início do menu
 printf ("escolha a opção desejada no menu: \n\n");
 printf("\t1  - Registro De Nomes \n");
 printf ("\t2  - Consulta De Nomes \n");
 printf("\t3  - Deletar Nomes \n\n\n");//final do menus
 printf("Sair do Sistema");
 printf("Opção:");
 
 scanf("%d",&opcao);//armazendo a escolha
 
 system("cls");
 
 switch(opcao)
 
 {case 1:
 registro();
	 
 	break;
 	
	 case 2:
	 	consulta();
 	break;
 	
 	case 3:
 		deletar();
 	break;
 	
 	case 4:
 		printf("Obrigado por utilizar o sistema");
 		return 0;
		 break; 	
 	
 default:printf("ESSA OPÇÃO NÃO ESTA DISPONIVEL\n");
	
	 system("pause");
	 
 	break;}
 }
}
