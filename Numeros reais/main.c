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
	/* Calculando e imprimindo o volume do cilindro */
	
	float pi = 3.1415,
          r = 2.0,
		  h = 4.0,
		  volume;
		  
	volume = pi*r*r*h;
	
	printf("Volume do Cilindro e = %.2f\n", volume);
	
	  
	return 0;
	system("PAUSE");
	
} /* end main */


