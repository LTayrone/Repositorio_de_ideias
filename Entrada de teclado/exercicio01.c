/* 
	Declarando variáveis no código
	
*/
/* ========================================================================================= */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================================= */

/* Função Principal */
main() 

{
	float x, y;
	
	printf("Digite o primeiro numero real: ");
	scanf("%f", &x);
	printf("Digite o segundo numero real: ");
	scanf(" %f", &y);
	
	
	printf("A soma dos numeros %.2f, %.2f e : %.2f\n" , 			x, y, x+y);
	printf("A subtracao dos numeros %.2f, %.2f e : %.2f\n" , 		x, y, x-y);
	printf("A multipicacao dos numeros %.2f, %.2f e : %.2f\n" , 	x, y, x*y);
	printf("A divisao dos numeros %.2f, %.2f e : %.2f\n" , 			x, y, x/y);
	
		
/* return and system pause (padrão) */	
	return 0;
	system("PAUSE");
	
} /* end main */


