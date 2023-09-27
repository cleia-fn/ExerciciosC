/******************************************************************************

autor  Cleia Renata    
		QUETAO 3 
Dada uma matriz real A(float), calcule a soma dos elementos de uma linha i da matriz,
onde i é fornecida pelo usuário.
*******************************************************************************/

#include <stdio.h>
int main()
{

int i = 0,j = 0 , k = 0, linsom;

printf("Olá, por favor digite o tamanho desejado da sua matriz : ");
scanf("%d", &k);

float aux[k][k], soma = 0;    

    for( i = 0 ; i < k; i++) 
    {
    	for (j = 0; j < k; j++){
    		printf("digite o numero desejado na linha %d, coluna %d da sua matriz %d x %d : ", i+1,j+1, k,k);
    		scanf("%2f", &aux[i][j]);
    	
      
    	}
    }
    printf("\n\n");
    
    for( i = 0 ; i < k; i++) 
    {
     /*
     printf(" | \n");*/
    	for (j = 0; j < k; j++){
    		
    		printf(" | %.2f ", aux[i][j]);
    		
    	}
    	printf("| Linha %d \n", i+1);
    	
    }
printf("\n\n\n");
printf("Digite a linha que deseja que seja somada dentro da matriz %dx%d :  ", k,k);
scanf("%d",&linsom);
printf("a linha deseja contem \n\n");
    for (j = 0; j < k; j++){
    	printf(" %.2f ", aux[linsom -1][j]);
    	soma = soma + aux[linsom-1][j];
    }
printf("\n\n a soma é  : %.2f  \n", soma);
    
    
    return 0;
}
