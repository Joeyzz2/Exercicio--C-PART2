#include <stdio.h>
#include <stdlib.h>

int main (void){
	float notas[5] = { 7.5, 8.0, 5.5, 4.3, 10.0} , soma = 0, media;; //valores
	int i;
	// declarando e inicializando o vetor notas
		printf("Notas do aluno: \n\n"); 	

	for(i= 0; i <=4; i++ ){
		printf("notas [%d] = %.1f \n", i, notas[i]);
	}
	//Calcular a soma e mostrar a soma das notas
	for ( i = 0; i < 5; i++ )
	soma += notas[i];
	printf ( "\nSoma total das notas: %.2f\n", soma );

	// calcular e mostrar a media das notas
	media = soma / 5;
	printf ( "\nMedia das notas: %.2f\n", media );
	
	system("pause");
	
	return 0;
}
