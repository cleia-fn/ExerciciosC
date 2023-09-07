/******************************************************************************

autor  Leonardo Carvalho    

			QUESTAO 3 
As maçãs custam R$ 0,30 cada, se forem compradas menos do que uma dúzia, 
e R$ 0,25, se forem compradas pelo menos doze. Escreva um programa que 
leia o número demaçãs compradas, calcule e escreva o valor total da compra
*******************************************************************************/

#include <stdio.h>

int main()
{
    float aux, area;
    printf("Olá, tudo bem, por favor digite o número de maças que deseja comprar : ");
    scanf("%f", &aux);
    
    
    if(aux <= 12){
        area = 0.30 * aux;
        printf("a unidade da maçã é R$ 0.30 voce comprou %.2f, deu um total de R$ %.2f  \n", aux, area);
    }
    if(aux > 12){
        area = 0.25 * aux;
        printf("a unidade da maçã é R$ 0.25, voce comprou %.2f, e deu um total de R$ %.2f \n", aux, area);
    }
    return 0;
}

