#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main(){
	printf("** CALCULO MÉDIA FINAL **");
	struct regAluno{
		char nome[20];
		int faltas;
		float nota1,nota2;
		float media;
		char resultado[20];
	};
	struct regAluno aluno;
	printf("\n\n Digite seus Dados...");
	printf("\n Nome: ");
	gets(aluno.nome);
	printf(" Faltas: ");
	scanf("%d",&aluno.faltas);
	printf(" Primeira nota: ");
	scanf("%f",&aluno.nota1);
	printf(" Segunda nota:");
	scanf("%f",&aluno.nota2);
	aluno.media = (aluno.nota1+aluno.nota2) / 2;
	if(aluno.media >= 6 && aluno.faltas <= 5){
		strcpy(aluno.resultado, "Aprovado");
	}else{
		strcpy(aluno.resultado, "Reprovado");
	}
	printf("\n\n***RESULTADOS***");
	printf("\n-----------------");
	printf("\nNome: %s",aluno.nome);
	printf("\nfaltas: %d",aluno.faltas);
	printf("\nNota 1: %.2f",aluno.nota1);
	printf("\nNota 2: %.2f",aluno.nota2);
	printf("\nMedia: %.2f",aluno.media);
	printf("\nResultado final: %s", aluno.resultado);
	
	return 0;
	
}
