/******************************************************************************

autor  Leonardo Carvalho    
QUESTAO 1 
 Escreva um programa para ler 2 valores (considere que não serão informados valores
iguais) e escrever o maior deles.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float aux,aux2;
    printf("Olá, tudo bem, por favor digite dois numeros\n");
    printf("digite o numero 1 : ");
    scanf("%f", &aux);
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

