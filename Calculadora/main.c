/* 
	Montando uma calculadora simples
*/
/* ========================================================================================= */

/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>

/* ========================================================================================= */

/* Função Principal */
main() 

{
	float var1, var2,result;
	int escolha;
	
	printf("Digite o primeiro numero: \n");  										/* usuario entra com primeiro numero */
	scanf("%f", &var1);																/* armazena o valor em var1 */
	
	printf("Digite o Segundo Numero: \n");											/* usuario entra com segundo numero */
	scanf("%f", &var2);																/* armazena o valor em var2 */
	
	printf("\n*******************Menu Principal************************* \n");		/* mostra menu com as opcoes */
    printf("Escolha a operacao matematica: \n");
    printf("                1. Soma \n");
    printf("                2. Subtracao \n");
    printf("                3. Multiplicacao \n");
    printf("                4. Divisao \n");
    printf("                Escolha: ");
    scanf("%d", &escolha);															/* armazena a escolha do usuario */		
    printf("Sua escolha foi: %d\n", escolha);
    
    if (escolha == 1) {																/* condicional para soma */
    	result = var1 + var2;													
    	printf(" O resultado e: %f", result);
	}
	
	else if (escolha == 2){															/* condicional para subtracao */
		
		result = var1 - var2;
    	printf("O resultado e: %f ", result);	
		
	}
	
		else if (escolha == 3){														/* condicional para multiplicacao */
		
		result = var1 * var2;
    	printf("O resultado e: %f ", result);	
		
	}
	
		else {																		/* condicional para divisao */
		
		result = var1 / var2;
    	printf("O resultado e: %f ", result);	
		
	}
		
/* return and system pause (padrão) */	
	return 0;
	system("PAUSE");
	
} /* end main */

