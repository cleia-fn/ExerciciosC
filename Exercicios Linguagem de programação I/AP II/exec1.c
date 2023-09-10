/******************************************************************************

autor  Leonardo Carvalho    
		QUESTAO 1 
 – Preencher um vetor com 10 elementos. Encontrar e imprimir o maior elemento
*******************************************************************************/

#include <stdio.h>

int main()
{

float aux[3]; 
float aux2, maior;
int i = 0;

printf("Olá, tudo bem, por favor digite 10 numeros \n\n");
    
    for( i ; i < 10; i++) 
    {
    printf("\n Numero %d : ", i+1);
    scanf("%2f", &aux2);
    aux[i] = aux2;
      
    }
maior = aux[0];
    
    for( i=0 ; i < 10; i++) 
    {
    
    printf("Numero %.2f : \n", aux[i]);
    
    
    if( maior < aux[i] ){
    	maior = aux[i];
    }

    }
    
printf( "\n\n maior = %.2f \n", maior);    
    return 0;
}

