#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	printf("Struct dados aluno \n\n");
	struct regPessoa {
		char nome[20];
		int idade;
		char sexo;
		float altura;
	};
	struct regPessoa aluno;
	printf("Entrada de dados em uma Struct\n\n");
	printf("Digite o nome do aluno: ");
	fflush(stdin);
	gets(aluno.nome);
	printf("Digite a idade do aluno: ");
	scanf("%d",&aluno.idade);
	printf("Digiteo o sexo aluno: ");
	fflush(stdin);
	scanf("%c",&aluno.sexo);
	printf("Digite a altura do aluno: ");
	fflush(stdin);
	scanf("%f",&aluno.altura);
	printf("\n\n***VALORES DIGITADOS***");
	printf("\nNome digitado: %s",aluno.nome);
	printf("\nIdade digitado: %d",aluno.idade);
	printf("\nSexo digitado: %c",aluno.sexo);
	printf("\nAltura digitado: %.2f\n",aluno.altura);
	system("pause");
	printf("\n\n Atribuição de dados em um struct");
	strcpy(aluno.nome,"José da Silva");
	aluno.idade=19;
	aluno.sexo = 'M';
	aluno.altura = 1.70;
	printf("\n\n ***VALORES ATRIBUIDOS ***");
	printf("\nnNome digitado: %s",aluno.nome);
	printf("\nIdade digitado: %d",aluno.idade);
	printf("\nSexo digitado: %c",aluno.sexo);
	printf("\nAltura digitado: %.2f",aluno.altura);
	
}
