/******************************************************************************

autor  Leonardo Carvalho    
		QUESTAO 3 
Dada uma matriz real A(float), calcule a soma dos elementos de uma linha i da matriz,
onde i é fornecida pelo usuário.
*******************************************************************************/

#include <stdio.h>
int main()
{

int i = 0,j = 0 , k = 0;

printf("Olá, por favor digite o tamanho desejado da sua matriz : ");
scanf("%d", &k);

float aux[k][k];    

    for( i = 0 ; i < k; i++) 
    {
    	for (j = 0; j < k; j++){
    		printf("digite o numero desejado na linha %d, coluna %d da sua matriz %d x %d : ", i,j, k,k);
    		scanf("%2f", &aux[i][j]);
    	
      
    	}
    }
    printf("\n\n");
    
    for( i = 0 ; i < k; i++) 
    {
     /*
     printf(" | \n");*/
    	for (j = 0; j < k; j++){
    		printf("| %.2f ", aux[i][j]);
    		
    	}
    	printf("|\n");
    }
    printf("\n\n\n");
    return 0;
}
