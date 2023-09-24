/******************************************************************************
autor : Leonardo Carvalho


Convert o numero de dias em anos. 


não está pronto
*******************************************************************************/

#include <stdio.h>

int main()
{
    int anos, aux2;
    float aux, num;
    
    printf("Digite o número de dias para converter em anos :");
    scanf("%f", &num);
    
  aux =  num % 365.25 ;
  aux2 = num / 365.25;
  anos = (int)aux2;
  printf(" %.2f dias é %d anos ", num, anos);
    

    return 0;
}

