/* 
	Linguagem C, o curso definitivo
	N�meros reais
	Autor: Eng. Lucas Tayrone Moreira
	Data: Setembro de 2022
*/
/* ========================================================================================= */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================================= */

/* Fun��o Principal */
main() 

{
	/* 
	CO c�digo abaixo calcula o valor da corrente que circula por um resistor de
	5k?, alimentado por uma tens�o de 12V e mostra em nota��o cient�fica.
   */
	
	float resistor = 5.0E3, 
		voltage = 12.0,
		current;
	current = voltage/resistor;
	printf("I= %.4fA \n", current);
	
	  
	return 0;
	system("PAUSE");
	
} /* end main */


