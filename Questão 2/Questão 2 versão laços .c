#include <stdio.h>
#include <stdlib.h>

//Fun��o fatorial usando la�os (estrutura de repeti��o)///
// O objetivo vai ser calcular um numero inteiro//


int main(){
	int res = 1, fat = 1;
	while (fat<=5) //Ser� usado o While para a programa fatorial, no comando while o fat � testado e caso o fat seja falso a repeti��o n�o ser� executada.
	{  
		res = res * fat; //Multiplica��o entre os valores
		fat++;
	}
	printf("O numero fatorial e: %d\n", res); // resultado do calculo entre o res e o fat = 5.
	return 0;
}
