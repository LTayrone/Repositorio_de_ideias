/* 
	Crie um programa para ler 3 notas e mostrar a média delas.
*/

/* ========================================================================================= */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================================= */

/* Função Principal */
main() 

{
	float x1, x2, x3, media, soma;
	
	printf("Digite a [1]ª  nota : ");
	scanf("%f",&x1);
	
	printf("Digite a [2]ª  nota : ");
	scanf("%f",&x2);
	
	printf("Digite a [3]ª  nota : ");
	scanf("%f",&x3);
	
	soma = (x1+x2+x3);
	media = (soma/3);
	
	printf("A media dos numeros e %.2f : ", media);
	
/* return and system pause (padrão) */	
	return 0;
	system("PAUSE");
	
} /* end main */


