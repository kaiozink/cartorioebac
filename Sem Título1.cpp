#include <stdio.h> //biblioteca de comunicação do usuario
#include <stdlib.h> //biblioteca de alocação de espaço em memoria
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsalvel por cuidar das string


int registro()
{  setlocale(LC_ALL, "Portuguese");

    char arquivo[40];
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
{ setlocale(LC_ALL, "Portuguese");
char cpf[40];
char conteudo[200];

printf("Digite o CPF a ser consultado:");
scanf("%s",cpf);

FILE *file;
file = fopen(cpf,"r");

if(file==NULL)
{printf("Não encontrado cliente \n");}

while(fgets(conteudo,200,file)!= NULL);

{
printf("\n Essas são as informaçoes do usuário");
printf("%s",conteudo);
printf("\n\n");

system("pause");
}

int deletar()

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
 	
 	
 default:printf("ESSA OPÇÃO NÃO ESTA DISPONIVEL\n");
	
	 system("pause");
	 
 	break;}
 }
}
