/******************************************************************************

autor  Leonardo Carvalho    

				 =================QUESTAO 2 
 2 - Escreva um programa para ler o número de lados de um polígono regular e a medida
do lado (em cm). Calcular e imprimir o seguinte:
− Se o número de lados for igual a 3 escrever TRIÂNGULO e o valor da área
− Se o número de lados for igual a 4 escrever QUADRADO e o valor da sua área.
− Se o número de lados for igual a 5 escrever PENTÁGONO.
*******************************************************************************/

#include <stdio.h>

int main()
{
    float aux,aux2, area, num ;
    printf("Olá, tudo bem, por favor digite os numeros de lados do poligono desejado : ");
    scanf("%f", &num);
    
    if (num == 3 ){
       printf("voce quer calcular a area de um triangulo \n");
       printf("digite a dimensao da base em cm : ");
    	scanf("%f",& aux);
       printf("digite a altura do triangulo : ");
    	scanf("%f", &aux2);
       
    area = (aux * aux2 )/ 2;
    printf(" a area do seu triangulo é %.2f  cm²\n", area);
     	       }
     	          
    if(num == 4 ){
        printf("voce quer calcular a area de um quadrado \n");        
        printf("digite lado 1 : ");
        scanf("%f",& aux);
        printf("digite o lado 2 : ");
        scanf("%f", &aux2);
            
    area = aux * aux2;
    printf(" A area do quadrado é : %.2f cm²\n ", area);

        }
       
    if(num == 5 ){
        printf("voce quer calcular a area de um pentagono \n");        
        printf("digite lado do pentagono : ");
        	scanf("%f",& aux);
        printf("digite o valor da apótema : ");
        	scanf("%f", &aux2);
            
    area = 5*aux * aux2;    
    printf(" o resultado e : %.2f cm²\n", area);

        }
       
    return 0;

}

