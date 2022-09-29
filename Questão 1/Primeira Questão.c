#include <stdio.h>

//Resolução para função potencia//
//Baseado na formula base2=base*base//
//função que calcula a enésima potência de uma variável real x: f(x, n) = xn//

int potencia (int base, int expoente) {
	
	if ( expoente ==0)
	return 1;
	else //A combinação if e else vai me permitir maior controle sobre o fluxo de código que o comando mais básico if, por permitir múltiplos testes serem agrupados juntos.// 
	return (base * potencia (base,expoente-1));
}
//Com a função potencia definida, agora podemos criar o codigo principal do programa//
int main(){
int base = 2 , expoente = 4 , resultado; //resolução do calculo//
resultado = potencia(base,expoente); //resultado do programa vai ser da multiplicação pelo numero//
printf("%d elevado a %d = %d", base, expoente, resultado); //resposta total do calculo que elevou ao resultado do objetivo do programa//
return 0;
}
