#include <stdio.h>
#include <stdlib.h>

float soma(float A, float B){ //funcao soma
	   float resultado;
	    resultado = A+B; 
	
return resultado;
}

float diferenca(float A, float B){ //funcao diferenca
	   float resultado;
	    resultado = A-B;
	     if(resultado < 0){
	     	resultado = resultado*-1;
		 }

return resultado;
}

float produto(float A, float B){ //funcao produto
	   float resultado;
	    resultado = A*B;

return resultado;
}

int main(){
     int conf;
	 float A, B, resultado;
	 	printf(" Digite o primeiro valor: ");
	 	 scanf("%f", &A);
	 	  system("cls");
	 	printf(" Digite o segundo valor: ");
	 	 scanf("%f", &B);
	 	  system("cls");
	do{
		printf(" Escolha uma opcao de calculo: \n\n [1] - Soma \n [2] - Diferenca \n [3] - Produto \n [4] - Outros valores \n [5] - Sair \n\n Selecione sua opcao: ");
		 scanf("%d", &conf);
		  system("cls");
		switch(conf){ //menu com switch-case
		 case 1:
		 	resultado = soma(A,B);
		 	 printf(" O resultado da soma sera: %0.1f \n\n ", resultado);
		 	  system("pause");
		 	   system("cls");
		 break;
		 case 2:
		 	resultado = diferenca(A,B);
		 	 printf(" O resultado da diferenca sera: %0.1f \n\n ", resultado);
		 	  system("pause");
		 	   system("cls");
		 break;
		 case 3:
		 	resultado = produto(A,B);
			 printf(" O resultado do produto sera: %0.1f \n\n ", resultado);
			  system("pause");
			   system("cls");
		 break;	   
	     case 4:
	        printf(" Digite o primeiro valor: ");
	 	     scanf("%f", &A);
	 	      system("cls");
	     	printf(" Digite o segundo valor: ");
	 	     scanf("%f", &B);
	 	      system("cls");
	 	 break;	
		  case 5:
	 	 break;		      	
		 default:
			printf(" Valor Incorreto. \n\n");
			 system(" pause");
			  system("cls");
		 break;	 	
	    }
	}while(conf != 5);
	
return 0;
}
