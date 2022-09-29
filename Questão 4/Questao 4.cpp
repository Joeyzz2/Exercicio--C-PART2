#include <stdio.h>
#include <stdlib.h>

void calcNotas(float notas[10]){  //funcao que calcular e retornar os valores maior e menor.
	int i, aMaior, aMenor;
	float maiorN=0, menorN=10;
		for(i=0; i<10; i++){
		 if(notas[i]>maiorN){
		  maiorN=notas[i];
		   aMaior = i;
		 }
		 if(notas[i]<menorN){	 
		  menorN=notas[i];
		   aMenor = i;
	     }
     	}
    system("cls");
	 printf(" Menor nota: %.2f do aluno %d", menorN, aMenor+1);
	 printf("\n Maior nota: %.2f do aluno %d", maiorN, aMaior+1);
	 
}

int main(){
	int i;
	float notas[10];
	 for(i=0; i<10; i++){
	  printf(" Digite a nota do aluno %d: ", i+1);  //função principal que recebe os valores das notas.
	   scanf("%f", &notas[i]);
	    system("cls");
	     while(notas[i]<0 || notas[i]>10){
		  printf("A nota nao pode ser menor que 0 ou maior que 10. \n\n");
		   system(" pause");
		   system("cls");
		    printf(" Digite a nota do aluno %d novamente. \n\n", i+1);
		   scanf("%f", &notas[i]);
		    system("pause");
		}
      }
	calcNotas(notas);

return 0;
}
