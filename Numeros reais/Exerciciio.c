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

	Escreve um algoritmo que calcule a frequência de corte de um filtro passabaixas, dada pela equação:

   */
	
	float pi, R,C, freq;
	pi = 3,14 ;
	R = 1.0E-6;
	C = 3000;
		
	freq = (1/((2*pi)*R*C));
	
	printf("Frequencia e = %.2fhertz\n", freq);
	
	return 0;
	system("PAUSE");
	
} /* end main */


