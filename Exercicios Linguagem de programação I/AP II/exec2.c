/******************************************************************************

autor  Cleia Renata   
		QUESTAO 2 
Ler um vetor (A) com 15 elementos. Construir um vetor B do mesmo tipo e tamanho,
sendo que cada elemento de B seja o triplo do elemento correspondente de A.
*******************************************************************************/
#include <stdio.h>

int main()
{

float aux[15],aux2[15], aux3;
int i, j = 15;
printf("Olá, por favor digite 15 numeros\n");
    
    for( i = 0 ; i < j; i++) 
    {
    printf("\n Digite o número %d : ", i+1);
    scanf("%2f", &aux3);
    aux[i] = aux3;
    aux2[i] = aux3 * 3;
      
    }
    printf("\n\n");
    printf(" Vetor A \n");
    for( i = 0 ; i < j; i++) 
    {
    printf(" %.2f ", aux[i]);
    
    }
    printf("\n\n\n");
    printf(" Vetor B \n ");
    for( i = 0 ; i < j; i++) 
    {
    
    printf("%.2f ", aux2[i]);
    }
    
    printf("\n\n\n");
    return 0;
}
