#include <stdio.h>
#include <stdlib.h>

//Função fatorial usando laços (estrutura de repetição)///
// O objetivo vai ser calcular um numero inteiro//


int main(){
	int res = 1, fat = 1;
	while (fat<=5) //Será usado o While para a programa fatorial, no comando while o fat é testado e caso o fat seja falso a repetição não será executada.
	{  
		res = res * fat; //Multiplicação entre os valores
		fat++;
	}
	printf("O numero fatorial e: %d\n", res); // resultado do calculo entre o res e o fat = 5.
	return 0;
}
