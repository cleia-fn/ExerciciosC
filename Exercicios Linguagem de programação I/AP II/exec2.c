/******************************************************************************

autor  Leonardo Carvalho    
QUESTAO 2 
Ler um vetor (A) com 15 elementos. Construir um vetor B do mesmo tipo e tamanho,
sendo que cada elemento de B seja o triplo do elemento correspondente de A.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float aux,aux2;
    printf("Olá, tudo bem, por favor digite dois numeros\n");
    printf("digite o numero 1 : ");
    scanf("%f",& aux);
    printf("digite o numero 2 : ");
    scanf("%f", &aux2);
    
    if(aux < aux2){
        printf("o numero maior e o %.2f \n", aux2);
    }
    if(aux> aux2){
        printf("o numero maior e o %.2f \n", aux);
    }
    return 0;
}

