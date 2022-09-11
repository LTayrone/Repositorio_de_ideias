/* 
	Linguagem C, o curso definitivo
	Números reais
	Autor: Eng. Lucas Tayrone Moreira
	Data: Setembro de 2022
*/
/* ========================================================================================= */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================================= */

/* Função Principal */
main() 

{
	/* 
	CO código abaixo calcula o valor da corrente que circula por um resistor de
	5k?, alimentado por uma tensão de 12V e mostra em notação científica.
   */
	
	float resistor = 5.0E3, 
		voltage = 12.0,
		current;
	current = voltage/resistor;
	printf("I= %.4fA \n", current);
	
	  
	return 0;
	system("PAUSE");
	
} /* end main */


