/* 
	Crie um programa para ler 3 notas e mostrar a m�dia delas.
*/

/* ========================================================================================= */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================================= */

/* Fun��o Principal */
main() 

{
	float x1, x2, x3, media, soma;
	
	printf("Digite a [1]�  nota : ");
	scanf("%f",&x1);
	
	printf("Digite a [2]�  nota : ");
	scanf("%f",&x2);
	
	printf("Digite a [3]�  nota : ");
	scanf("%f",&x3);
	
	soma = (x1+x2+x3);
	media = (soma/3);
	
	printf("A media dos numeros e %.2f : ", media);
	
/* return and system pause (padr�o) */	
	return 0;
	system("PAUSE");
	
} /* end main */


