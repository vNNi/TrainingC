#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

int main(){
	printf("**FRUTAS **");
	int i = 0;
	int j = 0;
	char aux [10];
	typedef struct{
		char nome[10],cor[10],saborL[10];
		int sabor;	
	} regFruta;
	 regFruta frutas[5];
	for(i;i<2;i++){
		printf("\nNome da fruta:");
		fflush(stdin);
		gets(frutas[i].nome);
		printf("\nCor da fruta:");
		fflush(stdin);
		gets(frutas[i].cor);
		printf("\nSabor (1,2,3,4) da fruta:");
		fflush(stdin);
		scanf("%d",&frutas[i].sabor);
	}
	for(j;j<2;j++){
		switch(frutas[j].sabor){
			case 1: strcpy(frutas[j].saborL,"Doce");
			break;
			case 2: strcpy(frutas[j].saborL, "Amargo");
			break;
			case 3: strcpy(frutas[j].saborL, "Azedo");
			break;
			case 4: strcpy(frutas[j].saborL, "Neutro");
			break;
			default: strcpy(frutas[j].saborL,"Nao identificado..");
		}
		printf("\n%s         %s          %s",frutas[j].nome,frutas[j].cor,frutas[j].saborL);
	}
	getch();
	return 0;
}
