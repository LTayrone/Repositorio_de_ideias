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

	O código abaixo calcula um divisor de tensão formado por R1 = 10k?, R2 = 2k
	e com 15V de tensão de entrada. A equação do divisor é
	
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


