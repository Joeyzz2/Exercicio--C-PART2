#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float avista(float valor){ // Função que retorna valor avista.
	   float valorDes, descont;
	  	descont = valor*0.1;
	  	valorDes = valor-descont;
	  	
return valorDes;
}

float duasParc(float valor){ //Função que retorna valor parcelado em 2 vezes.
	  float parc;
	  parc = valor/2;
	
return parc;
}

float maisParc(float valor, int parcelas){ // Função que retorna valor parcelado em mais de 3 vezes.
	int n, i;
	float valorPorc, valorParc, valorParcF;
	i = parcelas;
	 valorPorc = valor*0.03;
	  valorParc = valor/parcelas;
	valorParcF = valorParc+valorPorc;
	
	
return valorParcF;
}

int main(){
	float totalG, valorF;
	int formaP, conf=0,numParc;
		printf(" Digite o total de gastos: ");
	     scanf("%f", &totalG);	
	while(totalG <= 0){ // Repetiçãi que impede que o total de gastos do cliente seja 0.
	 system("cls");
	  printf(" Total nao pode ser igual ou menor que 0.\n Digite novamente: ");
	   scanf("%f", &totalG);
	}
	do{ // Função do-while que faz a parte principal do codigo funcionar.
		system("cls");
	 printf(" Valor total: %0.2f\n\n", totalG);
	  printf(" As seguintes formas de pagamentos estao disponiveis: ");
	  	printf("\n [1] - A vista 10 porcento de desconto.");
	  	printf("\n [2] - Duas parcelas com preco de entiqueta");
	  	printf("\n [3] - De 3 a 10 parcelas com 3 porcento de juros ao mes. (apenas compras acima de 100 reais.).\n\n");  
	  	 printf(" Digite a forma de pagamento: ");
	  	  scanf("%d", &formaP);   // Codigo para seleionar o metodo de pagamento.	 
	 	 switch(formaP){   //switch case para cada opcao de pagamento selecionada
	 	 	case 1:{  // Codigo para opcao avista.
				while(conf != 1 && conf != 2){
				 system("cls");
	 	 		valorF = avista(totalG);
	 	 		 printf(" Valor com desconto de 10 porcento aplicado: %0.2f\n\n", valorF);
	 	 		  printf(" Confirmar pagamento?: \n [1] - Sim\n [2] - Nao\n\n Digite a opcao: ");
	 	 		   scanf("%d", &conf);		
				}if(conf == 1){
				  system("cls");
				   printf(" Pagamento confimardo.");
					break;
				 }
			}
			case 2:{  // Codigo para a opcao parcelado em 2 vezes
				while(conf != 1 && conf != 2){
				 system("cls");
				valorF = duasParc(totalG);
				 printf(" Valor de cada parcela: 2x de %0.2f\n\n", valorF);
				  printf(" Confirmar pagamento?: \n [1] - Sim\n [2] - Nao\n\n Digite a opcao: ");
				   scanf("%d", &conf);			
				}if(conf == 1){
				  system("cls");
				   printf(" Pagamento confimardo.");
					break;
				 }
			}
			case 3:{  // Codigo para opcao parcelado em mais de 3 vezes
				while(conf != 1 && conf != 2){
				 system("cls");				
				 printf(" Quantas vezes sera parcelado?: ");
				  scanf("%d", &numParc);						
				valorF = maisParc(totalG, numParc);
				   	printf(" O valor sera de %0.2f, parcelado em %dx com acrescimo de 3 porcento.", valorF, numParc);
		printf(" Confirmar pagamento?: \n [1] - Sim\n [2] - Nao\n\n Digite a opcao: ");
				   scanf("%d", &conf);			
				}if(conf == 1){
				  system("cls");
				   printf(" Pagamento confimardo.");
					break;
				 }
			}
		 }
	}while(conf != 1);  // condicao para o do-while do codigo principal finalizar
		
return 0;
}
