#include <stdio.h>
#include <stdlib.h>

float calc(float vColunas, float vLinhas){ //funcao que calcula o resultado
		float mediaC, mediaL, resultado;
		mediaC = vColunas/1;
	  mediaL = vLinhas/3;
	  resultado = mediaC-mediaL;
	   if(resultado < 0){
	   	resultado*-1;
	   }

return resultado;
}



int main(){
	 int i, j;
	 float matriz[6][4], vColunas, vLinhas, resultado;
	  for(i=1;i<6;i++){ //matriz
	  	for(j=1;j<4;j++){
	  		printf("Digite o valor da posicao [%d] [%d]: ", i,j);
	  		 scanf("%f", &matriz[i][j]);
	  		 if(i==1 || i==3 || i==5){
			  	vLinhas = vLinhas+matriz[i][j];
			  }
	  		  if(j==2){
	  		  	vColunas = vColunas+matriz[i][j];
				}
     		system("cls");
		  }
	  }
	  resultado = calc(vColunas,vLinhas); //resultado
	   printf(" A diferenCa entre a media dos elementos das colunas pares e a media dos elementos das linhas impares e:\n %0.1f \n\n ", resultado);
	    system("pause");
	
return 0;
}
