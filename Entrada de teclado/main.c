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
	char caract1, caract2;
	
	printf("Digite um caractere: ");
	scanf("%c", &caract1);
	printf("Digite um caractere: ");
	scanf(" %c", &caract2);
	printf("Os caracteres digitados foram: %c e %c\n", caract1, caract2);
	
	/* o espa�o antes do segundo %c resolve o problema de armazenar os 2 caracteres */
		
/* return and system pause (padr�o) */	
	return 0;
	system("PAUSE");
	
} /* end main */


