#include <stdio.h>
int main()
{
     float numeros[15];
     int tamVetor = (sizeof(numeros)/sizeof(numeros[0]));
     float metadeNumeros[tamVetor];
     int i;
     int f;
     int g;
     for(i=0;i<tamVetor;i++){
         scanf("%f",&numeros[i]);
     }
     puts("\n-------------------------------------------------");
     puts("Os valores digitados foram: \n");
     
     for(f=0;f<tamVetor;f++){
         printf("Valor No %d: %.2f\n",f+1,numeros[f]);
         metadeNumeros[f]=numeros[f]/2;
     }
    puts("-------------------------------------------------");
    puts("As metades dos valores digitados são: \n");
    
    for(g=0;g<tamVetor;g++){
        printf("Metade No %d: %.2f\n",g+1,metadeNumeros[g]);
    }
    return 0;
}
