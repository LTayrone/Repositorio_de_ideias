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

	O c�digo abaixo calcula um divisor de tens�o formado por R1 = 10k?, R2 = 2k
	e com 15V de tens�o de entrada. A equa��o do divisor �
	
   */
	
	float R1, R2, vin, vout;
	R1 = 15.0E3;
	R2 = 1.5E3;
	vin = 20.0;
		
	vout = vin*R2/(R2+R1);
	
	printf("vout = %.2fV\n", vout);
	
	return 0;
	system("PAUSE");
	
} /* end main */


