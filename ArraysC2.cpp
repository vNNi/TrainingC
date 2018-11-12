#include <stdio.h>
int main(){
	
const int m=2;
const int n=5;
int numeros[m][n];
int somaNumeros;
int quantidadeImpares=0;
int i;
int f;
for(i=0;i<m;i++){
	for(f=0;f<n;f++){
			scanf("%d",&numeros[i][f]);
	}
}
for(i=0;i<m;i++){
	for(f=0;f<n;f++){
		somaNumeros+=numeros[i][f];
		if(numeros[i][f]%2!=0){
			quantidadeImpares++;
		}
	}
}

printf("A soma de todos os numeros e: %d\n",somaNumeros);
printf("E a quantidade de Nos impares e: %d",quantidadeImpares);

}
