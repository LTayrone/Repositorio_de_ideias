/* 
	Declarando vari�veis no c�digo
	
*/
/* ========================================================================================= */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================================= */

/* Fun��o Principal */
main() 

{
	float temp, conv;
	
	printf("Digite o valor da temperatura em Celsius (numeros)): ");
	scanf("%f", &temp);
	
	conv = (temp*1.8) + 32;

	printf("\n%.2f graus celsius sao %.2f fahrenheit: \n", temp, conv);
		
/* return and system pause (padr�o) */	
	return 0;
	system("PAUSE");
	
} /* end main */


