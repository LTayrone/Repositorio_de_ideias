/* 
	Treino de input e output com teclado
	
*/
/* ========================================================================================= */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================================= */

/* Função Principal */
main() 

{
	float sal_min, sal_pessoa, qnt_sal_min; 																		/* Declarando as variaveis no formato de float */
	
	sal_min = 1212.00;																								/* Atribuindo o valor do salario minimo a variavel */
	
	printf("Qual valor de salario voce recebe em R$ : ");															/* imprime mensagem ao usuario */
	scanf("%f", & sal_pessoa);																						/* armazena o valor digitado pelo usuario em uma variavel float */
	
	qnt_sal_min = (sal_pessoa/sal_min);																				/* calcula a quantidade de salarios minimos recebidos pelo usuario */
	
	printf("Uma pessoa que recebe o valor de R$ %.2f ganha %.2f salarios minimos /n",  sal_pessoa, qnt_sal_min);	/* Imprime para o usuario a quantidade de salarios minimos que ele recebe */
	
	
/* return and system pause (padrão) */	
	return 0;
	system("PAUSE");
	
} /* end main */


