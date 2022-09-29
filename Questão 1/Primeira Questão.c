#include <stdio.h>

//Resolu��o para fun��o potencia//
//Baseado na formula base2=base*base//
//fun��o que calcula a en�sima pot�ncia de uma vari�vel real x: f(x, n) = xn//

int potencia (int base, int expoente) {
	
	if ( expoente ==0)
	return 1;
	else //A combina��o if e else vai me permitir maior controle sobre o fluxo de c�digo que o comando mais b�sico if, por permitir m�ltiplos testes serem agrupados juntos.// 
	return (base * potencia (base,expoente-1));
}
//Com a fun��o potencia definida, agora podemos criar o codigo principal do programa//
int main(){
int base = 2 , expoente = 4 , resultado; //resolu��o do calculo//
resultado = potencia(base,expoente); //resultado do programa vai ser da multiplica��o pelo numero//
printf("%d elevado a %d = %d", base, expoente, resultado); //resposta total do calculo que elevou ao resultado do objetivo do programa//
return 0;
}
