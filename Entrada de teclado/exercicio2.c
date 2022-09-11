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
	float temp, conv;
	
	printf("Digite o valor da temperatura em Celsius (numeros)): ");
	scanf("%f", &temp);
	
	conv = (temp*1.8) + 32;

	printf("\n%.2f graus celsius sao %.2f fahrenheit: \n", temp, conv);
		
/* return and system pause (padrão) */	
	return 0;
	system("PAUSE");
	
} /* end main */


