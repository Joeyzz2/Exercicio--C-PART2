#include <stdio.h>
#include <stdlib.h>

//Fun��o fatorial com a //
// O objetivo vai ser calcular um numero inteiro//

int fatorial (int n)
{
	if (n==0 || n==1) // --> Se n for igual a 0 ou se n for igual a 1, o retorno do resultado para o usu�rio ser� 1.
		return 1;
	else
		// 5 * fatorial!
		return n * fatorial (n-1); // --> Chamada recursiva , valor que ser� multiplicado pelo valor de n e o valor ser� retornado.
}

int main () 
{
	
	int n = 5; //valor maior que 0
		
		printf("O valor fatorial de %d: %d\n", n,fatorial(n)); //Resultado final
	
	return 0;
}




