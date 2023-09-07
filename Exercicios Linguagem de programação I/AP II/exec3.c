/******************************************************************************

autor  Leonardo Carvalho    
		QUESTAO 3 
Dada uma matriz real A(float), calcule a soma dos elementos de uma linha i da matriz,
onde i é fornecida pelo usuário.
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

