/******************************************************************************

                           
autor : Leonardo Carvalho
                            
Verifica se o numero escolhido é impar ou par.
*******************************************************************************/

#include <stdio.h>

int main()
{
int num;
    
    printf("Digite o número que deseja descobrir se é impar ou par : ");
    scanf("%d", &num);
    
    if(num % 2 == 0 ){
    	printf("O número %d é par \n", num);
    }
    else
    	printf(" O numero %d é impar\n ", num);
    

    return 0;
}

